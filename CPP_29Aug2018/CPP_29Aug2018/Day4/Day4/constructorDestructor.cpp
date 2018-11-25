#include <iostream>
using namespace std;

class cA {
	int m_i;
public:
	cA() {		cout<<"cA Default Constructor: this= "<< this <<endl;
		this->m_i = 0;	}
	explicit cA(int rhs) {		cout<<"cA single parameterized constructor: this= "<< this <<endl;
		m_i = rhs;	}
	~cA() {		cout<<"Destructor: m_i= "<< m_i << " : this= "<< this <<endl;	}
};

void main() {
	cA obj;
	cA obj2(10);
	/*	sub esp, sizeof(cA)
		push 10 // rhs
		push &obj2 // this
		call cA::cA(int)
	*/
	//i = j = k = 10;
	cA obj4 = 20;
	/*
		cA temp = (cA) 10
		sub esp, sizeof(cA)
		push (int) temp // rhs
		push &obj2 // this
		call cA::cA(int)
	*/
	
	cout<<"=============="<<endl;
}

void main2(){
	cA obj;
	
	{
		cA obj2, obj3;
		
		cout<<"======================"<<endl;
	}// obj3.~cA(); obj2.~cA()

	cA obj4;
	cout<<"-------------------"<<endl;
} // obj4.~cA(); obj.~cA()


void main1(){
	cA obj;
	/*
		sub esp, sizeof(cA)
		push &obj // this
		call cA::cA
	*/
	cout<<" &obj= "<< &obj <<endl;
	cA obj2 (10);
	/*
		sub esp, sizeof(cA)
		push 10   // ?
		push &obj // this
		call cA::cA(int)
	*/
	cout<<" &obj2= "<< &obj2 <<endl;

	obj2.~cA();
	cout<<"-----------------"<<endl;

}// obj2.~cA()
 // obj.~cA()
 // add esp, sizeof(cA) * 2
