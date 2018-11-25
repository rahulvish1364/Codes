#include <iostream>
using namespace std;

/*
void fun() {
	void nested() {
	}
	nested();
}*/

class cA{
	int m_i;
	int m_j;
public:
	cA(int first, int second) { m_i=first; m_j=second; 
		cout<<"cA Multiple parameterized constructor"<<endl;
	}
	// __thiscall cA ( cA *const this, cA rhs)
	explicit cA ( cA & rhs) {
		this->m_i = rhs.m_i;
		this->m_j = rhs.m_j;
		cout<<"Copy constructor"<<endl; 
		cA(1,2);
		cout<<"^^^^^^^^^^^^^^^^^^^"<<endl;
	}// <namelessObj>.~cA()

	~cA() { cout<<"cA des: this= "<< this << ", m_i= "<< m_i <<", m_j= "<< m_j <<endl; }
};

void main(){
	cA obj(1,2);
	cout<<"---------------"<<endl;
	cA clone(obj);
	cout<<"---------------"<<endl;

}


void main4(){
	cA obj(10, 20);
	/*
		sub esp, sizeof(cA)
		push 20 
		push 10
		push &obj // this
		call cA::cA(int, int)
	*/
	cA obj2(obj);
	/*
		sub esp, sizeof(cA)
		push obj	// rhs
		push &obj2 // this
		call cA::cA(cA)
	*/
//	cA obj4 = obj2;
	cA obj4 ( obj2);

	cout<<"------------------"<<endl;
}








void main1(){
//	int i=j=10;
//	int i, j;
	int i,j=20;


	i = j = 10;
}