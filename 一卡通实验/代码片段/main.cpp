/*
	һ��ͨ�˳�ϵͳ
	������-20009200713
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
			cout << "����������ѡ��" << endl;
			cin >> choice ;
			switch (choice)
			{
			case 0://�˳�ϵͳ
				ExitSystem();
				break;
			case 1:
			{ build();//������ 
			break; }
			case 2:
			{ Delete();//ɾ���� 
			break; }
			case 3:
			{ Rechange();//��ֵ�� 
			break; }
			case 4:
			{ use();//ˢ�� 
			break; }
			case 5:
			{ bus.buildbus();//�����೵ 
			break; }
			case 6:
			{ bus.show();//�೵��Ϣ 
			break; }
			case 7:
			{ people p;
			p.show();//����Ϣ 
			break; }
			default:
				cout << "�����������������" << endl << endl << endl;
			}
	}
	
	system("pause");
	return 0;
}