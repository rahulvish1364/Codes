#include <iostream>
using namespace std;

namespace myns{ // ::myns
	int i = 10; // ::myns::i
	namespace nested {
		int i = 40; // ::myns::nested::i
	}
}

namespace myns { // ::myns
	int j = 20; // ::myns::j
}
using namespace myns;

void main(){

	cout<<" i = "<< i <<endl;
	cout<<" j = "<< j <<endl;
	cout<<" ::myns::nested::i = "<< ::myns::nested::i <<endl;
	cout<<" nested::i = "<< nested::i <<endl;
	
	using namespace ::myns::nested;

	cout<<" i = "<< i <<endl;
			// :: i
			// :: myns :: i
			// ::myns::nested :: i
}

void fun() {
	cout<<"i = "<< i <<endl;
}



