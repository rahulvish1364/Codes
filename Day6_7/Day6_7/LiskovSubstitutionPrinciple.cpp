#include <iostream>
using namespace std;

struct Base {};

struct Derived : Base {};

void main(){
	Base bObj;
	Derived dObj;

	//Base &bRef = bObj; // Valid
	Base &bRef = dObj; // Valid, due to Liskov Substitution Principle

	Base *bp = &dObj; // &bObj;
}