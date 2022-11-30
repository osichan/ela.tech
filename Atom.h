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
public:
	string name;
	long double atomic_mass;
	int neutrons;
	int protons;
	int electrons;
	string type;
	Atom(string name ,long double atomic_mass, int neutrons, int protons, int electrons,enum type type)
	{
		this->name = name;
		this->atomic_mass = atomic_mass;
		this->neutrons = neutrons;
		this->protons = protons;
		this->electrons = electrons;
		cout << "atomic_mass   " << this->atomic_mass << endl;
		cout << "neutrons   " << this->neutrons << endl;
		cout << "protons   " << this->protons << endl;
		cout << "electrons   " << this->electrons << endl;
		cout << "type   " << eType[type] << endl;
		isNeutral();
	}
	void isNeutral() {
		if (this->neutrons == this->electrons) {
			cout << "true" << endl << endl;
		}
		else {
			cout << "false" << endl << endl;
		}
	}
};