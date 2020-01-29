/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign3
 * pet.cpp
 */

#include "pet.h"

// Constructors
Pet::Pet() {
	name = "";
	age = 0;
	type = "";
	weight = 0.0;
}

Pet::Pet(string newName, int newAge, string newType, double newWeight) {
	name = newName;
	age = newAge;
	type = newType;
	weight = newWeight;
}


// Accessors
string Pet::getName() {
	return name;
}

int Pet::getAge() {
	return age;
}

string Pet::getType() {
	return type;
}

double Pet::getWeight() {
	return weight;
}



// Mutators
void Pet::setName(string newName) {
	name = newName;
}

void Pet::setAge(int newAge) {
	age = newAge;
}

void Pet::setType(string newType) {
	type = newType;
}

void Pet::setWeight(double newWeight) {
	weight = newWeight;
}
	


// Misc
string Pet::toString() {
	string outStr = "";
	vector<string> labels = {"Name", "Age", "Type", "Weight"};
	vector<string> values = {name, std::to_string(age), type, std::to_string(weight)};
	
	for(int i = 0; i < labels.size(); ++i) {
		outStr += labels[i] + ": " + values[i];
		if(i < labels.size()-1)
			outStr += "\t";
	}
	
	return outStr;
}