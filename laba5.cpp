#include <iostream>
#include "Atom.h"
#include "Molecul.h"

using namespace std;

int main() {
	Atom A("A", 0.1, 3, 2, 4, ION), B("B", 0.02, 4, 2, 4, STABLE), C("C", 0.034, 2, 1, 2, ISOTYPE), D("D", 0.026, 2, 1, 5, RADIOACTIVE);
	Molecul one("one"),two("two");
	one.Add_atom(A);
	one.Add_atom(B);
	one.Add_atom(C);
	two.Add_atom(B);
	two.Add_atom(D);
	cout<<"   one "<<endl<<"average mass = "<< one.findAverageMass();
	one.sort_by_atomic_mass();
	cout << endl << endl << "two " << endl << "average mass = " << two.findAverageMass();
	two.sort_by_atomic_mass();
	return 0;
}