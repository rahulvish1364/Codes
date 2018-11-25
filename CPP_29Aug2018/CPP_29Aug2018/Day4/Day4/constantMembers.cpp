#include <iostream>
using namespace std;

class cA{
	int m_i;
	mutable int m_j;
public:
	cA(int first, int second) { 
		m_i=first; 
		m_j=second; 
		cout<<"cA Multiple parameterized constructor"<<endl;
	}
	void fun1() const { cout<<" Hehehe"<<endl; }
	void fun2() {}
	//void __thiscall display(const cA *const this) const {
	void display() const { // const int m_i;
					// int m_j;
		cout<<"cA::display - this= "<< this << ", m_i= "<< m_i <<", m_j= "<< m_j <<endl; 
//		m_i = 678;
		m_j = 12345;
		// this->m_j = 12345;
		fun1();
		cA localObj(20, 30);
		localObj.fun2();
	}
	explicit cA ( cA & rhs) {
		this->m_i = rhs.m_i;
		this->m_j = rhs.m_j;
		cout<<"Copy constructor"<<endl; 
	}
	~cA() { cout<<"cA des: this= "<< this << ", m_i= "<< m_i <<", m_j= "<< m_j <<endl; }
};

void main(){
	cA obj(1,2);

	obj.display();
	cout<<"---------------"<<endl;
}