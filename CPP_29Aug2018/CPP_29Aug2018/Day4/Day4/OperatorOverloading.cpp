#include <iostream>
using namespace std;

class Complex {
	int real, imag;
public:
	Complex(int x=0, int y=0) :real(x), imag(y){} // this->real = x
/*	int getReal() { return real; }
	int getImag() { return imag; }
	void setImag(int val) { imag = val;}
*/	~Complex() { cout<<"Real: "<< real <<", Imag: "<< imag <<endl; }
	Complex& operator + (int rhs);
};

Complex& Complex::operator+(int rhs) {
	cout<<"Complex& Complex::operator+(int rhs): rhs= "<< rhs <<endl;
	imag += rhs;
	return *this;
}

/*
int operator + (Complex& lhs, int rhs) {
	cout<<"void operator + (Complex& lhs, int rhs): rhs= "<< rhs <<endl; 
	return 2;
}
*/
/*
Complex operator + (Complex& lhs, int rhs) {
	Complex temp (lhs.getReal(), lhs.getImag() + rhs);
	cout<<"Complex operator + (Complex& lhs, int rhs): rhs= "<< rhs <<endl; 
	return temp;
}
*/
/*
Complex& operator + (Complex& lhs, int rhs) {
	cout<<"void operator + (Complex& lhs, int rhs): rhs= "<< rhs <<endl;
	lhs.setImag( lhs.getImag() + rhs);
	return lhs;
}
*/

void main(){
	Complex obj(10, 20);
	
	//obj + 4 + 5;
	obj.operator+(4).operator+(5);

	//obj + 4 + 5;
	//::operator+ ( ::operator+(obj,4), 5);
	//::operator +( ::operator +(obj,4), 5);

//	cout<< obj + 4 + 5 <<endl;

	// ::operator +(obj, 4)
	
	cout<<"-------------------"<<endl;
}





















#if 0
//typedef unsigned int UINT;

struct Dummy {}dummy;

class cA{
	int m_i;
public:
	cA(int x=10) 
		{ m_i = x; cout<<"cons(int=10)"<<endl; }
	cA(char ch) { cout<<"Cons(char)"<<endl; }
	cA(Dummy& ) { cout<<"I'm here"<<endl; }
	~cA() {cout<<"m_i= "<< m_i <<endl; }
};

void main(){
//	cA obj('A');

	cA obj2(dummy);
}




#endif