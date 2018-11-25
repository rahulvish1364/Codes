#include <iostream>
using namespace std;

class cA {
	int m_i;
	//FILE *fp;
public:
	/*
	int get_m_i() { return m_i; }
	void set_m_i(int val) { this->m_i = val; }
	*/
	cA() {
		cout<<"cA Default Constructor: this= "<< this <<endl;
		this->m_i = 0;
		//fp = fopen("myfile.txt", "w");
	}
	cA(int rhs) {
		cout<<"cA single parameterized constructor: this= "<< this <<endl;
		m_i = rhs;
	}
	~cA() {
		cout<<"Destructor: m_i= "<< m_i << " : this= "<< this <<endl;
		//fclose(fp);
	}
};


void main(){
	cA obj;
	/*
		sub esp, sizeof(cA)
		push &obj // this
		call cA::cA
	*/
	cA obj2 (10);
	/*
		sub esp, sizeof(cA)
		push 10   // ?
		push &obj // this
		call cA::cA(int)
	*/

	cout<<"-----------------"<<endl;

}// obj2.~cA()
 // obj.~cA()
 // add esp, sizeof(cA) * 2


void main1(){
	cA obj;
	/*
		sub esp, sizeof(cA)
		push &obj // this
		call cA::cA
	*/

//	cout<<"sizeof(cA): "<< sizeof(cA) <<endl;
//	obj.m_i = 1234;
//	obj.set_m_i(10);
	//cout<<"obj.get_m_i() : "<< obj.get_m_i() <<endl;
	cout<<"--------------------"<<endl;
} /*
  push &obj
  call cA::~cA()
  add esp, sizeof(cA)
  */
