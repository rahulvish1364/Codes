#include <iostream>
using namespace std;

struct sA {
	void fun() { vfun(); }
	virtual void vfun() { cout<<"sA::vfun"<<endl; }
};

struct sB : sA {
	void vfun() { cout<<"sB::vfun"<<endl; }
};

void main(){
	sA *ap = new sB();

	ap->fun();
}