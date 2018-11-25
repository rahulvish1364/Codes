#include <iostream>
using namespace std;

//int Count = 0;

class cA {
	static int Count; // cA::Count
	static int classMember;
	int m_i;
public:
	cA() { ++Count; }
	// int __thiscall getCount( cA *const this) { return Count; }
	// int __cdecl getCount( ) { return Count; } // cA::getCount
	static int getCount() { return Count; }
	static int getClassMember() { return classMember; }
	~cA() { --Count; }
	static void Initialize(int c, int cm) {
		Count = c;
		classMember = cm;
	}
};

int cA::Count = 0;
int cA::classMember = 500;

void main(){
	cA::Initialize(800, 900);
	cout<<"sizeof(cA): "<< sizeof(cA) <<endl; 
	cout<<"cA::getClassMember()= "<< cA::getClassMember() <<endl;
}

void main2(){
	cout<<"sizeof(cA): "<< sizeof(cA) <<endl; 
	
	//cA::Count = 500;
	cout<<"Total objects are: "<< cA::getCount() <<endl;

	cA obj1;
	cout<<"Total objects are: "<< obj1.getCount() <<endl; // cA::getCount
	{
		cA obj2;
		cout<<"Total objects are: "<< obj1.getCount() <<endl;
	}
	cout<<"Total objects are: "<< obj1.getCount() <<endl;
	
}

#if 0
void main(){
	cout<<"sizeof(cA): "<< sizeof(cA) <<endl; 
	
	cA::Count = 500;
	cout<<"Total objects are: "<< cA::Count <<endl;
	cA obj1;
	cout<<"Total objects are: "<< cA::Count <<endl;
	{
		cA obj2;
		cout<<"Total objects are: "<< cA::Count <<endl;
	}
	cout<<"Total objects are: "<< cA::Count <<endl;
	
}
#endif


#if 0
void main(){
//	Count = 500;

	cout<<"Total objects are: "<< Count <<endl;
	cA obj1;
	cout<<"Total objects are: "<< Count <<endl;
	{
		cA obj2;
		cout<<"Total objects are: "<< Count <<endl;
	}
	cout<<"Total objects are: "<< Count <<endl;
}
#endif

