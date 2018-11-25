// Daimond Inheritance
#include <iostream>
using namespace std;

struct sA { int m_i; sA():m_i(25){} };
struct sB : sA { int m_j; sB():m_j(26){} };
struct sC : sA { int m_k; sC():m_k(27){} };
struct sD : sB, sC { int m_l; sD():m_l(28) {} };

void main(){
	sD dObj;
	long *p = (long*) &dObj;

	cout<<"*p (sD::sB::sA::m_i=25): "<< *p <<endl;
	p++;
	cout<<" *p(m_j=26): "<< *p <<endl;
	p++;
	cout<<"*p (sD::sC::sA::m_i=25): "<< *p <<endl;
	p++;
	cout<<" *p(m_k=27): "<< *p <<endl;
	p++;
	cout<<" *p(m_l=28): "<< *p <<endl;
	cout<<"-----------------"<<endl;
}




void main1(){
	cout<<"sizeof(sA): "<< sizeof(sA) <<endl;
	cout<<"sizeof(sB): "<< sizeof(sB) <<endl;
	cout<<"sizeof(sC): "<< sizeof(sC) <<endl;
	cout<<"sizeof(sD): "<< sizeof(sD) <<endl;
}
/*
P1: 4, 8, 8, 16 } 3
P2: 4, 8, 8, 12 } 19
P3: 4, 8, 8, 20 
*/