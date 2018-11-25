#include <iostream>
using namespace std;

struct sA {
	sA() // vptr(sA::vt) 
		{ vfun(); }
	virtual void vfun() { cout<<"sA::vfun"<<endl; }
	~sA() // vptr(sA::vt)
		{ vfun(); }
};

struct sB : sA {
	sB() // sA(), vptr(sB::vt)
		{ vfun(); }
	void vfun() { cout<<"sB::vfun"<<endl; }
	~sB() // vptr(sB::vt)
		{ vfun(); }
};

void main(){
	sB bObj;
	
	cout<<"-----------"<<endl;
}