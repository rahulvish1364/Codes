#include <iostream>
using namespace std;

class Base1 {
	int m_i;
public:
	Base1(int x=0):m_i(x) { cout<<"Base 111 Cons"<<endl; }
	~Base1() { cout<<"Base 111 Des"<<endl; }
};

class Base2 {
	int m_j;
public:
	Base2(int y=1):m_j(y) { cout<<"Base 2222 Cons"<<endl; }
	~Base2() { cout<<"Base 2222 Des"<<endl; }
};

class Derived : public Base1, public Base2{
	int m_k;
public:
	Derived(int z=2) : m_k(z) // Base1(), Base2()
		{ cout<<"Derived Cons"<<endl; }
	~Derived() { cout<<"Derived Des"<<endl; }// ~Base2(), ~Base1()
};

void main(){
	Derived dObj;
	/*
		sub esp,sizeof(Derived)
		push 2 // z
		push &dObj //this
		call Derived::Derived(int=2)
	*/
	cout<<"------------------"<<endl;
}// dObj.~Derived()

void main1(){
	cout<<"sizeof(Base1): "<< sizeof(Base1) <<endl;
	cout<<"sizeof(Base2): "<< sizeof(Base2) <<endl;
	cout<<"sizeof(Derived): "<< sizeof(Derived) <<endl;
}