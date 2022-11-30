#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "Atom.h"

using namespace std;

class Molecul {	
public:
	string name;
	vector <Atom> atoms;
	Molecul(string name)
	{
		this->name = name;
	}
	void Add_atom(Atom& a) {
		atoms.push_back(a);
	}
	void sort_by_atomic_mass();
	double findAverageMass();
};

void Molecul::sort_by_atomic_mass() {
	sort(atoms.begin(), atoms.end(), [](Atom& a, Atom& b) { return a.atomic_mass < b.atomic_mass; });
	cout  << endl << "sorted Atoms:"<<endl;
	for (auto i : atoms) {
		cout << i.name << " = " << i.atomic_mass << setw(7);
	}
}
double Molecul::findAverageMass() {
	long double full_mass = 0;
	for (auto i = atoms.begin(); i < atoms.end(); i++) {
		full_mass += i->atomic_mass;
	}
	long double average_mass = full_mass / atoms.size();
	return average_mass;
}