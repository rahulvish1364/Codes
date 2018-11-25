#include <iostream>
using namespace std;

int gi = 10;

void main(){
	int gi = 20;

	cout<<" gi= "<< gi <<endl;

	{
		extern int gi;
		cout<<" gi= "<< gi <<endl;
	}
}