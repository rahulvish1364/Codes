#include <iostream>
using namespace std;

void swap(int x, int y) 
{	/* Prologue
		push ebp
		mov ebp, esp
	*/
	cout<<"Swap : x= "<< x <<", y= "<< y <<endl;
	x ^= y;
	y ^= x;
	x ^= y;
	cout<<"Swap : x= "<< x <<", y= "<< y <<endl;
}

void main(int na, char *av[], char *env[]){
// offset(local): -(declared before(sizes) + it's size)
	// i => -(0 + 4)
	// j => -(4 +4) 
	int i=10, j=20;
	/*
		sub esp, sizeof(int) // for i
		sub esp, sizeof(int) // for j
		or
		sub esp, sizeof( sum_of_local's)

		mov [i], 10 => ebp + offset(i)
		mov [j], 20 => ebp + offset(j)
	*/

	cout<<"Main: i= "<< i <<", j= "<< j <<endl;
	swap(i, j);
	/*	push j
		push i
		call swap
	*/

	cout<<"Main: i= "<< i <<", j= "<< j <<endl;
}
