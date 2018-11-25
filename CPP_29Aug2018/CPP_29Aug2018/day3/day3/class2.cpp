#include <iostream>
using namespace std;

//class 
//struct 
class cA {
	int m_i; // #0
	int m_j; // #4
	int m_k; // #8
public:

	// In VC++: void __stdcall fun1() ;
	// In g++: void __attribute__((stdcall)) fun1();	
	// In VC++: void __cdecl fun1() ;	// In C.

	// In VC++: 
	// void __thiscall fun1() ;

	void fun1() { cout<<"cA::fun11111"<<endl; }

	// void __thicall fun2( cA * const this, int rhs)
	void fun2(int rhs) { 
		cout<<"cA::fun22222"<<endl; 
		m_j = rhs;  // cA::m_j
		// this->m_j = 1234;
	}
	void fun3() { cout<<"cA::fun33333"<<endl; }
};

void main(){
	cA obj1, obj2;

	obj1.fun2(101);
	/*
	push 101 // rhs
	push &obj1 //this
	call cA::fun2
	*/
	obj2.fun2(205);
	/*
	push 205 // rhs
	push &obj2 // this
	call cA::fun2
	*/
}


void main1(){
	cA obj;

//	obj.m_i = 1234;
//	cout<<"obj.m_i= "<< obj.m_i<<endl;

	obj.fun1();
	obj.fun2();
	obj.fun3();
}