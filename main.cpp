/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign3
 * main.cpp
 */

#include "pet.cpp"

int main(int argv, char** argc) {
	
	// INSTANTIATE
	Pet *p1 = new Pet("Sparky", 3, "dog", 80.5);	// Constructed with values
	
	Pet *p2 = new Pet();	// Constructed empty, values set with mutators
	p2->setName("Oscar");
	p2->setAge(5);
	p2->setType("cat");
	p2->setWeight(8.12);	
	
	
	// OUTPUT VALUES
	cout << p1->toString() << endl;
	cout << p2->toString() << endl;
	
	
}