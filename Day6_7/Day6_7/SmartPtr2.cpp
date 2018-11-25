#include <iostream>
using namespace std;

class cA {
	int m_i;
public:
	cA(int x=10) : m_i(x) { cout<<"cA Cons"<<endl; }
	void display() const { cout<<"cA :: display"<<endl; }
	~cA() { cout<<"cA Des"<<endl; }
};

class cB {
	int m_j;
public:
	cB(int y=20) : m_j(y) { cout<<"cB Cons"<<endl; }
	void display() const { cout<<"cB :: display"<<endl; }
	~cB() { cout<<"cB Des"<<endl; }
};


template <typename T>
class SmartPtr{
	T *m_p;
public:
	SmartPtr(T *p = NULL) : m_p(p) {}
	T * operator -> () {return m_p; }
	~SmartPtr() {
		if(m_p)
			delete m_p;
	}
};

void main(){
	auto_ptr<cA> ap ( new cA());
	ap->display();

	SmartPtr<cB> bp = new cB();
	bp->display();

	cout<<"----------"<<endl;

}


void main2(){
	SmartPtr<cA> ap = new cA();

	ap->display();

	SmartPtr<cB> bp = new cB();
	bp->display();

	cout<<"----------"<<endl;

}
/*
class SmartPtr{
	cA *m_p;
public:
	SmartPtr(cA *p = NULL) : m_p(p) {}
	cA * operator -> () {return m_p; }
	~SmartPtr() {
		if(m_p)
			delete m_p;
	}
};

class SmartPtrcB{
	cB *m_p;
public:
	SmartPtrcB(cB *p = NULL) : m_p(p) {}
	cB * operator -> () {return m_p; }
	~SmartPtrcB() {
		if(m_p)
			delete m_p;
	}
};
*/

#if 0
void main1(){
	SmartPtr ap = new cA();

	ap->display();

	SmartPtrcB bp = new cB();
	bp->display();

	cout<<"----------"<<endl;


}// ap.~smartPtr
#endif