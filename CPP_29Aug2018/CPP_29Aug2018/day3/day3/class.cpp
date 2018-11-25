#include <iostream>
using namespace std;
/*
struct sA {};
class cA {};
*/
// Moodle.blr1.cdac.in

struct sA { 
	int m_i; // sA :: m_i // ::*, .*, ->*
};
class cA {
	int m_i; 
};

void main(){
	sA sObj;
	cA cObj;

	cout<<"&sObj= "<< &sObj<<endl;
	cout<<"&cObj= "<< &cObj<<endl;

	cout<<"sizeof(sA): "<< sizeof(sA) <<endl;
	cout<<"sizeof(cA): "<< sizeof(cA) <<endl;
}






#if 0
//#define UINT unsigned int

typedef unsigned int UINT;

unsigned int ui1, ui2;
UINT ui3, ui4;

void fun() {}


typedef void (*FNPTR) () ;

struct sA {
	int m_i;
	//void (* fp1) ();
	//void (* fp2) ();
	//void (* fp3) ();
	FNPTR fp1, fp2, fp3;

};



//typedef struct sA sA;

void main(){
	//int* ip1, ip2;
	//int  *ip1, ip2;

	sA obj;
	void * fname();




}

#endif