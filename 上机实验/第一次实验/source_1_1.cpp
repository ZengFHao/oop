#include <iostream>
#include <map>
#include <string>

using namespace std;

struct information {
	int nameNum;
	double sum;
	information() {
		nameNum = 0;
		sum = 0;
	}
};

typedef map<string, information> myMap;
myMap nameDictionary;
int main() {
	string name;
	double value;
	int totalNum = 0;
	double totalSum = 0;
	while (1) {
		cin >> name;
		if (!cin) break;
		cin >> value;
		if (!cin) break;
		cout << value;
		information& p = nameDictionary[name];
		p.nameNum++;
		p.sum += value;
		totalNum++;
		totalSum += value;
	}
	for (myMap::iterator i = nameDictionary.begin(); i != nameDictionary.end(); i++) {
		cout << "name: " << i->first << "  number:" << i->second.nameNum << "  average:" << i->second.sum / i->second.nameNum << endl;
	}
	cout << "totalSum:" << totalSum << "  totalAverage:" << totalSum / totalNum;
	return 0;
}
/*
   测试数据：
xi 60
wei 50.2
jin 100
wei 40.5
wei 1.1
jin 200.0
*/
/*
   小王 20
   小李 27.5
   小曾 88.8
   小王 10.5
   小李 14
   小张 40.2
*/