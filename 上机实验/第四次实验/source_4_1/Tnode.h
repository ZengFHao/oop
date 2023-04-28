
#include <string>
using namespace std;

class Tnode
{
    string  word;
    int  count;
    Tnode* left;
    Tnode* right;
public:
    Tnode();
    ~Tnode();
    void setword(string);
    string getword();
    void setCount();
    Tnode* Left();
    Tnode* Right();
    void setLeft(Tnode*);
    void setRight(Tnode*);
};







