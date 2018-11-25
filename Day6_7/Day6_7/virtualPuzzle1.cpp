#include <iostream>
using namespace std;

class Base{
	int m_i;
public:
	Base(int x=10):m_i(x) { cout<<"Base cons"<<endl; }
	virtual ~Base() { cout<<"Base Des"<<endl; }
};

class Derived : public Base {
	int m_j;
public:
	Derived(int y=20) : m_j(y) {cout<<"Derived Cons"<<endl; }
	~Derived() { cout<<"Derived Des"<<endl; }// ~Base()
};

void main(){
	Base *bp = new Derived();
	cout<<"---------------"<<endl;
	delete bp;
	/*
		//bp->~Base()
		bp->~?()
		::operator delete (bp) 
	*/
}