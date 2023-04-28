#include"Sequence.h"

int main() {
	Sequence* spi = new Increment(2);
	Sequence* spp = new Power(3);
	Sequence* spd = new Decrement(4);
	for (int i = 0; i < 3; i++) {
		spi->print();
		spp->print();
		spd->print();
		cout << endl;
	}
	return 0;
}