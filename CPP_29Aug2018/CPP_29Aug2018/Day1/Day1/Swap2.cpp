#include <iostream>
using namespace std;

/*
void swap(int x, int y) // Receive by value
{	
	cout<<"Swap : x= "<< x <<", y= "<< y <<endl;
	x ^= y;
	y ^= x;
	x ^= y;
	cout<<"Swap : x= "<< x <<", y= "<< y <<endl;
}
*/

void swap(int & x, int &y) // Receive by reference
{	
	cout<<"Swap : x= "<< x <<", y= "<< y <<endl;
	x ^= y;
	y ^= x;
	x ^= y;
	cout<<"Swap : x= "<< x <<", y= "<< y <<endl;
}

void swap(int * x, int * y) // Receive by address
{
	cout<<"Swap : *x= "<< *x <<", *y= "<< *y <<endl;
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
	cout<<"Swap : *x= "<< *x <<", *y= "<< *y <<endl;
}

void main(int na, char *av[], char *env[]){
	int i=10, j=20;

	cout<<"Main: i= "<< i <<", j= "<< j <<endl;
	//swap(i, j); //Pass by value
//	swap (&i, &j); // Pass by Address
	swap(i, j); //Pass by Reference
	cout<<"Main: i= "<< i <<", j= "<< j <<endl;
}
