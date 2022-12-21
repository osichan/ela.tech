#pragma once
#include <iostream>
#include <vector>

using namespace std;

enum type {
	ISOTYPE,
	RADIOACTIVE,
	ION,
	ANTIMATTER,
	STABLE
};
string eType[] = {"ISOTYPE","RADIOACTIVE","ION","ANTIMATTER","STABLE"};

class Atom {
private:
	string name;
	long double atomic_mass;
	int neutrons;
	int protons;
	int electrons;
	string type;
public:
	Atom(string name ,long double atomic_mass, int neutrons, int protons, int electrons,enum type type)
	{
		this->name = name;
		this->atomic_mass = atomic_mass;
		this->neutrons = neutrons;
		this->protons = protons;
		this->electrons = electrons;
		cout << name<<"    ";
		isNeutral();
	}
	void isNeutral();
	string getName() { return name; }
	long double getAtomicMass() { return atomic_mass; }
};
void Atom::isNeutral() {
	if (neutrons == electrons) {
		cout << "true" << endl << endl;
	}
	else {
		cout << "false" << endl << endl;
	}
}