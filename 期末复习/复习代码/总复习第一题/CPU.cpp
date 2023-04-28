#include "CPU.h"
CPU::CPU() {
	rank = P1;
	frequency = 2;
	voltage = 100;
	cout << "creat a CPU!" << endl;
}
CPU::CPU(CPU_rank rank, int F, double V) {
	this->rank = rank;
	this->frequency = F;
	this->voltage = V;
	cout << "creat a CPU!" << endl;
}

CPU::CPU(const CPU& other) {
	cout << "copy creat a CPU!" << endl;
	this->rank = other.rank;
	this->frequency = other.frequency;
	this->voltage = other.voltage;
}

void CPU::showinfo() {
	cout << "rank:" << rank << endl;
	cout << "frequency:" << frequency << endl;
	cout << "voltage:" << voltage << endl;

}

CPU::~CPU() {
	cout << "destruct a CPU!" << endl;
}