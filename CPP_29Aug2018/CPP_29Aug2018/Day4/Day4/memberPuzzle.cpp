#include <iostream>
using namespace std;

class cA {
	int j;
	int i;
	int k;
public:
	cA(int x=100) :j(x), i(j), k(j){}
	~cA() { cout<<"i= "<< i <<", j= "<< j <<", k= "<< k <<endl; }
};

void main(){
	cA obj(10);
}
/*
P1: 10, 10, 10 }14
P2: 100, 100, 100 }4
P3: G, G, G } 
P4: 10, G, G } 2
P5: G, 10, G } 1
P6: G, 10, 10 }

*/




