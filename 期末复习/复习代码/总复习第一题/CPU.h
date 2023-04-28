#pragma once
#include<iostream>

using namespace std;


class CPU
{
public:
	static enum CPU_rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
	CPU();
	CPU(CPU_rank rank, int F, double V);
	CPU(const CPU& other);
	void showinfo();
	~CPU();
private:
	
	CPU_rank rank;
	int frequency;
	double voltage;

};

#define P6 CPU::P6

