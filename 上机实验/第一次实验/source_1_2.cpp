#include <iostream>
#include <string>

using namespace std;



int atoi_10(const char* s) {
	int n = 0;
	int t;
	string S = s;
	if (S[0] == '-'||S[0]=='+') {
		for (int i = 1; i < S.length(); i++) {
			if (S[i] == ' ' || S[i] == '\t') {
				i++;
				break;
			}
			if ((S[i] < '0' && (S[i] != '-' || S[i] != '+')) || S[i]>'9' || S[i] == 64) break;
			n *= 10;
			t = S[i] - '0';
			n += t;
			if (n > 2147483647 && S[0] != '-') return 2147483647;
			else if (n > 2147483648 && S[0] == '-') return -2147483648;
		}
		if(S[0]=='-') n *= -1;
	}
	else {
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == ' ' || S[i] == '\t') {
				i++;
				break;
			}
			if ((S[i] < '0' && (S[i] != '-' || S[i] != '+')) || S[i] > '9' || S[i] == 64) break;
			n *= 10;
			t = S[i] - '0';
			n += t;
			if (n > 2147483647 && S[0] != '-') return 2147483647;
			else if (n > 2147483648 && S[0] == '-') return -2147483648;
		}
	}
	return n;
}
int atoi_8(const char* s) {
	int n = 0;
	int t;
	string S = s;
	if (S[0] == '-' || S[0] == '+') {
		for (int i = 2; i < S.length(); i++) {
			if (S[i] == ' ' || S[i] == '\t') {
				i++;
				break;
			}
			if ((S[i] < '0' && (S[i] != '-' || S[i] != '+')) || S[i] > '7' || S[i] == 64) break;
			n *= 8;
			t = S[i] - '0';
			n += t;
			if (n > 2147483647 && S[0] != '-') return 2147483647;
			else if (n > 2147483648 && S[0] == '-') return -2147483648;
		}
		if (S[0] == '-') n *= -1;
	}
	else {
		for (int i = 1; i < S.length(); i++) {
			if (S[i] == ' ' || S[i] == '\t') {
				i++;
				break;
			}
			if ((S[i] < '0' && (S[i] != '-' || S[i] != '+')) || S[i] > '7' || S[i] == 64) break;
			n *= 8;
			t = S[i] - '0';
			n += t;
			if (n > 2147483647 && S[0] != '-') return 2147483647;
			else if (n > 2147483648 && S[0] == '-') return -2147483648;
		}
	}
	return n;
}
int atoi_16(const char* s) {
	int n = 0;
	int t;
	string S = s;
	if (S[0] == '-' || S[0] == '+') {
		for (int i = 3; i < S.length(); i++) {
			if (S[i] == ' ' || S[i] == '\t') {
				i++;
				break;
			}
			if ((S[i] < '0' && (S[i] != '-' || S[i] != '+')) || S[i] > 'F' || S[i] == 64) break;
			n *= 16;
			if (S[i] < 'A') t = S[i] - '0';
			else t = S[i] - 'A' + 10;
			n += t;
			if (n > 2147483647 && S[0] != '-') return 2147483647;
			else if (n > 2147483648 && S[0] == '-') return -2147483648;
		}
		if (S[0] == '-') n *= -1;
	}
	else {
		for (int i = 2; i < S.length(); i++) {
			if (S[i] == ' ' || S[i] == '\t') {
				i++;
				break;
			}
			if ((S[i] < '0' && (S[i] != '-' || S[i] != '+')) || S[i] > 'F' || S[i] == 64) break;
			n *= 16;
			if(S[i]<'A') t= S[i] - '0';
			else t= S[i] - 'A'+10;
			n += t;
			if (n > 2147483647 && S[0] != '-') return 2147483647;
			else if (n > 2147483648 && S[0] == '-') return -2147483648;
		}
	}
	return n;
}

int main() {
	const char *s = "123";
	int n=0;
	if ((s[0] == '0' && s[1] == 'x') || (s[0] == '-' && s[1] == '0' && s[2] == 'x') || (s[0] == '+' && s[1] == '0' && s[2] == 'x')) n = atoi_16(s);
	else if ((s[0] == '0' && s[1] != 'x') || (s[0] == '-' && s[1] == '0' && s[2] != 'x') || (s[0] == '+' && s[1] == '0' && s[2] != 'x')) n = atoi_8(s);
	else if ((s[0] != '-' && s[0] != '0') || (s[0] == '-' && s[1] != '0')|| (s[0] == '+' && s[1] != '0'))  n=atoi_10(s);
	cout << n;
	return 0;
}