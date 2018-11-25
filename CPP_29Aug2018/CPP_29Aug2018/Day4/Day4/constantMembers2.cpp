#include <iostream>
using namespace std;

struct Dummy{} dummy;
	
class cA{
	const int m_i;
	int m_j;
public:
	cA (Dummy&) : m_i(100), m_j(200)
	{ cout<<"I'm here"<<endl;}
	void fun1() { cout<<"fun111"<<endl; }
	cA(int first=0, int second=0) : m_i(first)//, m_j(second) // Initializer list
	{ 
		//m_i=first; 
		//m_j=second; 
		cout<<"cA constructor"<<endl;
	//	cA lobj(dummy);
	}
	~cA() { cout<<"m_i= "<< m_i <<", m_j= "<< m_j<<endl; }
};

void main(){
	cA obj(10, 20);
	cout<<"--------------------"<<endl;
}
