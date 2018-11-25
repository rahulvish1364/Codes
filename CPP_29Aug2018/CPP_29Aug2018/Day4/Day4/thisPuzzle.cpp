#include <iostream>
using namespace std;

class cA {
	int m_i;
public:
	cA(int m_i=100) :m_i(m_i) // this->m_i = m_i
	{
		//m_i = m_i;
		//this->m_i = m_i;
	}
	~cA() { cout<<"m_i= "<< m_i <<endl; }
};

void main(){
	cA obj(10);
}