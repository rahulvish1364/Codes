#include <iostream>
using namespace std;

class Complex {
	int real, imag;
public:
	Complex(int x=0, int y=0) :real(x), imag(y){} 
	~Complex() { cout<<"Real: "<< real <<", Imag: "<< imag <<endl; }
	Complex& operator + (int rhs);
	Complex& operator ++();
	Complex& operator ++(int);
//	void operator +() {}
};

void main6(){
	int a=10;

	int b=--a;

	cout<<"b= "<< b << endl;
}


void main(){
	Complex obj(10, 20);

	//++obj;
	//obj.operator++();

	+++++obj;
	//obj.operator++().operator++();
}

Complex& Complex::operator+(int rhs) {
	cout<<"Complex& Complex::operator+(int rhs): rhs= "<< rhs <<endl;
	imag += rhs;
	return *this;
}
Complex& Complex::operator++() {
	cout<<"Complex& Complex::operator++() "<<endl;
	++real;
	return *this;
}
Complex& Complex::operator++(int dummy) {
	cout<<"Complex& Complex::operator++(int dummy): dummy= "<< dummy <<endl;
	++imag;
	return *this;
}

void main1(){
	Complex obj(10, 20);

	++obj;
	/*
		push &obj // this
		call Complex::operator ++()
	*/

	obj++;
	/*
		push 0	  // dummy
		push &obj // this
		call Complex::operator ++(int=0)
	*/
	cout<<"--------------------"<<endl;
}
