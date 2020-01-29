/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign3
 * pet.h
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pet {
	
	public:
	
		// Constructors
		Pet();
		Pet(string newName, int newAge, string newType, double newWeight);
		
		// Accessors
		string getName();
		int getAge();
		string getType();
		double getWeight();
	
		// Mutators
		void setName(string newName);
		void setAge(int newAge);
		void setType(string newType);
		void setWeight(double newWeight);
	
		// Misc
		string toString();


	private:
		string name;
		int age;
		string type;
		double weight;
		
};