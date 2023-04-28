#include <iostream>                                             //该程序可以完成整数的二进制，十进制，八进制和十六进制表示，但八进制和十六进制负数的原码表示
#include <string>
#include <math.h>
using namespace std;

int flag = 0;//0表示正数，1表示负数
int change_2(int num) {  //转化为二进制
	int t = 0;
	int n = 0;
	int count = 1;
	while (num > 0) {
		t = num % 2;
		n += (t * pow(10, count));
		count++;
		num /= 2;
	}
	n /= 10;
	return n;
}
int change_8(int num) { //转化为八进制
	int t = 0;
	int n = 0;
	int count = 0;
	while (num > 0) {
		t = num % 8;
		n += (t * pow(10, count));
		count++;;
		num /= 8;
	}
	return n;
}

int digitNum(int num) {  //判断位数
	int count = 0;
	while (num > 0) {
		count++;
		num /= 10;
	}
	return count;
}
void itoa(int num, char* buffer, int digit,int n) {
	int t;
	if (n == 10) {
		if (flag == 1) {
			buffer[0] = '-';
			for (int i = digit; i > 0; i--) {
				t = num % 10;
				buffer[i] = t+'0';
				num /= 10;
			}
		}
		else if (flag == 0) {
			for (int i = digit - 1; i >= 0; i--) {
				t = num % 10;
				buffer[i] = t+'0';
				num /= 10;
			}
		}
	}
	else if (n == 2) {
		if (flag == 1) {
			
			buffer[0] = '1';
			for (int i = digit; i > 0; i--) {
				t = num % 10;
				buffer[i] = t + '0';
				num /= 10;
			}
		}
		else if (flag == 0) {
			buffer[0] = '0';
			for (int i = digit; i > 0; i--) {
				t = num % 10;
				buffer[i] = t + '0';
				num /= 10;
			}
		}
	}
	else if (n == 8) {
		if (flag == 0) {
			buffer[0] = '0';
			for (int i = digit; i > 0; i--) {
				t = num % 10;
				buffer[i] = t + '0';
				num /= 10;
			}
		}
		else {
			buffer[0] = '-';
			buffer[1] = '0';
			for (int i = digit+1; i > 1; i--) {
				t = num % 10;
				buffer[i] = t + '0';
				num /= 10;
			}
		}
	}
	else if (n == 16) {
		digit = digitNum(change_2(num));
		digit = ceil(digit / 4);
		if (flag == 0) {
			buffer[0] = '0';
			buffer[1] = 'x';
			for (int i = digit+1; i > 1; i--) {
				t = num % 16;
				if (t < 10) buffer[i] = t + '0';
				else if(t>=10&&t<=15) buffer[i] = t + 'A'-10;
				num /= 16;
			}
		}
		else if (flag == 1) {
			buffer[0] = '-';
			buffer[1] = '0';
			buffer[2] = 'x';
			for (int i = digit + 2; i > 2; i--) {
				t = num % 16;
				if (t < 10) buffer[i] = t + '0';
				else buffer[i] = t + 'A'-10;
				num /= 16;
			}
		}
	}

}

int main() {
	char buffer[33] = { '\0'};
	int n;
	int num;
	cout << "需转化的数字：" << endl;
	cin >> num;
	cout << "请选择转化为格式（2,8,10，16）：" << endl;
	cin >> n;
	while (n != 2 && n != 8 && n != 10 && n != 16) {
		cout << "输入错误，请重新输入！" << endl;
		cin >> n;
	}
	if (num < 0) {
		num *= -1;
		flag = 1;
	}
	if (n == 2) num = change_2(num);
	else if (n == 8) {
		if (num > 2147483647 && flag == 0) {
			cout << "0x7FFFFFFF" << endl; 
			return 0;
		}
		else if (num > 2147483647 && flag == 1) {
			cout << "0x80000000" << endl; 
			return 0;
		}

	}
	else if (n == 16) {
		if (num > 2147483647 && flag == 0) {
			cout << "017777777777" << endl;
			return 0;
		}
		else if (num > 2147483647 && flag == 1) {
			cout << "020000000000" << endl;
			return 0;
		}
	}
	int digit = digitNum(num);
	itoa(num, buffer, digit,n);
    for (int i = 0; buffer[i]!='\0'; i++) {
		cout << buffer[i];
	}
	
	return 0;
}