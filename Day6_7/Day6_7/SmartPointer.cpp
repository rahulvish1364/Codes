#include <iostream>
using namespace std;

class cA {
	int m_i;
public:
	cA(int x=10) : m_i(x) { cout<<"cA Cons"<<endl; }
	void display() const { cout<<"cA :: display"<<endl; }
	~cA() { cout<<"cA Des"<<endl; }
};

class SmartPtr{
	cA *m_p;
public:
	SmartPtr(cA *p = NULL) : m_p(p) {}
	cA * operator -> () {return m_p; }
	~SmartPtr() {
		if(m_p)
			delete m_p;
	}
};

void main(){
	SmartPtr ap = new cA();

	ap->display();

	cout<<"----------"<<endl;
}// ap.~smartPtr







void main1(){
	cA *ap = new cA();
	//SmartPtr ap


	ap -> display();
	cout<<"----------------"<<endl;
}