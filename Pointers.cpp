// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //Include files

using namespace std; //gets the name space

//Pointer related code:

//Pointer function:
void moePointers(int length = 1, int whichOne = -1) {
	int value = 0;
	int firstElement = 0;
	int* locationInMemory = &firstElement;
	if (whichOne == -1) {
		for (int i = 0; i < length; i++) {
			int* location = locationInMemory;
			*location = 5;//Sets the value at that memory address
			cout << "Value at memory location: " << *locationInMemory << endl;//gets value at memory location.
			*location += i;//Adds the value at the memory address.
			cout << "Value at memory location: " << *locationInMemory << endl;//gets value at memory location.
		}
	}
}

//Print Pointers:
void printAllPointers(int v) {
	int* f = &v;
	cout << "Pointer address: " << f << endl;
	cout << "Value at address: " << v << endl;
	cout << "Pointer Address plus 1: " << f + 1 << endl;
}

//Class with methods and properties in it:

class Person {
	string name = "Bob";
	int age;
public://methods are public:
	int value = 1;
	void setNameAge(string name, int age) {
		this->name = name;
		this->age = age;
		cout << "Users name is " << name << " and their age is " << age << endl;
	}
	string getName() {
		return name;
	}
}; //end with this

int main() {

	//Pointers:
	moePointers(1);
	int v = 5;
	int* f = &v;
	printAllPointers(v);
	v = *f;//Gets value from the pointer address
	printAllPointers(v);
	cout << endl;//Prints a space.

	//Classes, methods, and properties:
	Person a = Person();
	cout << a.getName() << endl;
	a.setNameAge("Michael", 26);
	a.value += 100;
	cout << a.value << endl;
	cout << a.getName() << endl;
}