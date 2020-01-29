/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign3
 * main.cpp
 */

#include "pet.cpp"

int main(int argv, char** argc) {
	
	//cout << "sup fella" << endl;
	
	Pet *p1 = new Pet("Sparky", 3, "dog", 80.5);
	Pet *p2 = new Pet("Oscar", 5, "cat", 8.12);
	
	cout << p1->toString() << endl;
	cout << p2->toString() << endl;
	
	
}