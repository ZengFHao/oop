/*
	一卡通乘车系统
	曾凡浩-20009200713
*/
#include<iostream>
#include<string>
#include<fstream>
#include"fuction.h"
#include"Card.h"
#include"Bus.h"
#include"people.h"
using namespace std;

int main() {
	int choice =1;
	Bus bus;
	while (choice!=0) {
			Show_Menu();
			cout << "请输入您的选择：" << endl;
			cin >> choice ;
			switch (choice)
			{
			case 0://退出系统
				ExitSystem();
				break;
			case 1:
			{ build();//新增卡 
			break; }
			case 2:
			{ Delete();//删除卡 
			break; }
			case 3:
			{ Rechange();//充值卡 
			break; }
			case 4:
			{ use();//刷卡 
			break; }
			case 5:
			{ bus.buildbus();//新增班车 
			break; }
			case 6:
			{ bus.show();//班车信息 
			break; }
			case 7:
			{ people p;
			p.show();//人信息 
			break; }
			default:
				cout << "输入错误！请重新输入" << endl << endl << endl;
			}
	}
	
	system("pause");
	return 0;
}