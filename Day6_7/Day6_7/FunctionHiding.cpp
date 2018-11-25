#include <iostream>
using namespace std;

struct Base {
	void fun1() { cout<<"Base::fun1111"<<endl; } // Base::fun1
	void fun2() { cout<<"Base::fun2222"<<endl; } // Base::fun2
	void fun3() { cout<<"Base::fun3333"<<endl; } // Base::fun3
};

struct Derived : Base {
	void fun2() { cout<<"Derived::fun2222"<<endl; } // Derived::fun2
	void bfun2() { Base::fun2(); }
};

void main(){
	Derived dObj;

	dObj.fun2(); // Derived::fun2
	dObj.Base::fun2();
	dObj.bfun2();
}





void main2(){
	cout<<"sizeof(Base): "<< sizeof(Base) <<endl;
	cout<<"sizeof(Derived): "<< sizeof(Derived) <<endl;
}
