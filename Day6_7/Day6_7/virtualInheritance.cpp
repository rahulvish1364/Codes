#include <iostream>
using namespace std;

struct sA { int m_i; sA():m_i(25){} };
struct sB : virtual sA { int m_j; sB():m_j(26){} };
struct sC : virtual sA { int m_k; sC():m_k(27){} };
struct sD : sB, sC { int m_l; sD():m_l(28) {} };

void main(){
	sD dObj;
	
	long *p = (long*) &dObj;
	long *vptr = (long*) p;
	long *offset = (long*) *vptr;

	++offset;
	cout<<" *offset(20) : "<< *offset <<endl;

	p++;
	cout<< "*p(m_j=26): "<< *p <<endl;
	p++;
	vptr = (long*) p;
	offset = (long*) *vptr;
	++offset;
	cout<<" *offset(12): "<< *offset<<endl;
	p++;
	cout<<" *p(m_k=27): "<< *p<<endl;
	p++;
	cout<<" *p(m_l=28): "<< *p <<endl;
	p++;
	cout<<" *p(m_i=25): "<< *p <<endl;

	cout<<"--------------------"<<endl;
}




void main1(){
	cout<<"sizeof(sA): "<< sizeof(sA) <<endl;
	cout<<"sizeof(sB): "<< sizeof(sB) <<endl;
	cout<<"sizeof(sC): "<< sizeof(sC) <<endl;
	cout<<"sizeof(sD): "<< sizeof(sD) <<endl;
}
// P1: 4, 8, 8, 16 } 4
// P2: 4, 8, 8,	12 } 2
// P3: 4, 4, 4, 12 } 20
// P4: 4, 4, 4, 16 } 6
// P5: 4, 12, 12, 24 }
// P6: