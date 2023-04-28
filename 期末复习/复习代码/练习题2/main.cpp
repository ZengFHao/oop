#include"Warrior.h"
#include <iostream>
int main()

{
    Fighter* objs[2];

    objs[0] = new Fighter("Harry");

    Warrior Stallone("Stallone", objs[0]);

    objs[1] = &Stallone;

    cout << "== Test the class famliy ==" << endl;

    for (int i = 0; i < 2; i++) {

        objs[i]->outTitle();

        cout << "----  " << i + 1 << "  ----" << endl;

        objs[i]->hello();

    }

    cout << "==This is the end." << endl;

    delete objs[0];

    return 0;

}