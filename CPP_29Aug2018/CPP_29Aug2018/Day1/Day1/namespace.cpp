#include <iostream>
using namespace std;


namespace myns // ::myns
{
	int gi = 10; // :: myns :: gi
}

int gi = 40; // :: gi

void main(){
	int gi = 20; // offset

	cout<<"gi = "<< gi <<endl;
				// offset(gi)
	cout<<"myns :: gi= "<< myns::gi <<endl;
	cout<<" :: gi= "<< ::gi <<endl;
	{
		extern int gi;
		cout<<"gi = "<< gi <<endl;
	}
}


