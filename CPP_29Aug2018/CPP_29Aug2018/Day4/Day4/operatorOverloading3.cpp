#include <iostream>
using namespace std;

/*
class Complex {
	friend ostream& operator << (ostream& os, Complex& rhs) ;
	int real, imag;
public:
	Complex(int x=0, int y=0) :real(x), imag(y){} 
	~Complex() { cout<<"Real: "<< real <<", Imag: "<< imag <<endl; }
};

ostream& operator << (ostream& os, Complex& rhs) {
	os << rhs.real <<" +i "<< rhs.imag <<endl;
	return os;
}
*/

class Complex {
	int real, imag;
public:
	Complex(int x=0, int y=0) :real(x), imag(y){} 
	~Complex() { cout<<"Real: "<< real <<", Imag: "<< imag <<endl; }
	friend ostream& operator << (ostream& os, Complex& rhs) {
		os << rhs.real <<" +i "<< rhs.imag<<endl;
		return os;
	}
};

void main(){
	Complex obj(10, 20);

	cout << obj ;

	cout<<"---------------"<<endl;
}
