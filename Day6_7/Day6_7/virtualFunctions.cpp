#include <iostream>
using namespace std;

struct Base {
	// static vtable[3];
	// vtable *vptr;
	virtual void fun1() { cout<<"Base::fun1111"<<endl; } // Base::fun1
	virtual void fun2() { cout<<"Base::fun2222"<<endl; } // Base::fun2
	virtual void fun3() { cout<<"Base::fun3333"<<endl; } // Base::fun3
};
/*
	Base::vtable[0] = fun1
	Base::vtable[1] = fun2
	Base::vtable[2] = fun3
*/

struct Derived : Base {
	//void fun1() { cout<<"Derived::fun1111"<<endl; } // Derived::fun1	
	//void fun2() { cout<<"Derived::fun2222"<<endl; } // Derived::fun2	
	void fun3() { cout<<"Derived::fun3333"<<endl; } // Derived::fun3	
};


void main(){
	Derived dObj;
	Base *bp = &dObj;
	Base &bRef = dObj;

	((void (*)()) (*( (long*) (*( (long*) bp))))) ();

	((void (*)())(*(1 + ( (long*) (*( (long*)bp)))))) ();

	((void (*)()) (*( (long*)(*( (long*) &dObj))))) ();

	((void (*)()) (*((long*)(2 + ((long*) (*( (long*) (&dObj)))))))) ();
}

void main9(){
	Derived dObj;
	Base *bp = &dObj;
	Base &bRef = dObj;

	long *p = (long*) bp;
	long *vptr = (long*) p;
	long *vtable = (long*) *vptr;

	typedef void (*FNPTR)();
	FNPTR fp1, fp2, fp3;

	fp1 = (FNPTR) *vtable;

	++vtable;
	//void (*fp)() = *vtable;
	fp2 = (FNPTR) *vtable;

	++vtable;
	fp3 = (FNPTR) *vtable;

	fp1();
	fp2();
	fp3();
}



void main7(){
	Derived dObj;
	Base *bp = &dObj;
	Base &bRef = dObj;

	bp->fun2(); // ?::fun2
	/*
	1. Derefer bp to reach Object/Instant.
	2. Derefer Object to get vptr, v reach corresponding vtable.
	3. Add offset of fun2.
	4. Derefer and get base address of the function.
	5. Pass arguments and make a call.
	*/
	bRef.fun2(); // ?::fun2
}

void main2(){
	cout<<"sizeof(BAse): "<< sizeof(Base) <<endl;
	cout<<"sizeof(Derived): "<< sizeof(Derived) <<endl;
}
