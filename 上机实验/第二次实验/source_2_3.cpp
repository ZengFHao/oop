#include <stdarg.h>
#include <iostream>

using namespace std;

void error(char const* fmt, ...) {
    
    va_list p;
    va_start(p, fmt);
    for (char const* s = fmt; *s; ++s)
        if (*s != '%')
            cerr.put(*s);
        else
            switch (*(++s)) {
            case '%': 
                cerr.put('%');
                break;
            case 's': 
                cerr << va_arg(p, char const*);
                break;
            case 'c': 
                cerr << va_arg(p, char);
                break;
            case 'd':
                cerr << va_arg(p, int);
                break;
            default: throw domain_error(string("panic"));
            }
    va_end(p);
}

int main() {
    error("A string \"%s\", a single character \'%c\', an integer %d\n"
        "and a percent-symbol \'%%\'.\n",
        "Hello World", '$', 12345);
    return 0;
}
