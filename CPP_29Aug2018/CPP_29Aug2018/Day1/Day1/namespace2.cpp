#include <iostream>
using namespace std;

namespace myns // ::myns
{
	int gi = 10; // :: myns :: gi
	int gj = 20; // ::myns::gj
}

namespace myns2 {
	int gi = 40; // ::myns2::gi
}

void main(){
	cout<<"myns::gi = "<< myns::gi <<endl;
	cout<<"myns2::gi = "<< myns2::gi <<endl;

	using namespace myns;

	cout<<" gj = "<< gj <<endl;
				// gj -> offset (Local)
				// ::gj -> global
				// myns::gj -> namespace myns
	
	using namespace myns2;

	cout<<" myns::gi = "<< myns::gi <<endl;
					// myns::gi or myns2::mi
	cout<<" myns2::gi = "<< myns2::gi <<endl;
}


