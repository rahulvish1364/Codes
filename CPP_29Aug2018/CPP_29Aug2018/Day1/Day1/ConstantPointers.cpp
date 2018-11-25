#include <iostream>
using namespace std;

void main(){
	int i=10, j=20;
	//int  * const ip = &i; // C-style reference
	int & ip = i; // C++ Reference
			////int * const ip = &i;
	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
//	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;
	//*ip = 12345;

	cout<<" ip = "<< ip <<endl;
	// cout<<" ip = "<< *ip <<endl;
}

#if 0
void main(){
	int x =123;
	int *i=&x, j=20;
	//int  * const ip = &i; // C-style reference
	int* & ip = i; // C++ Reference
			////int * const ip = &i;
	int ip2 = *ip;
	//		int ip2 = * (*ip);
	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
//	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;
	//*ip = 12345;

	cout<<" ip = "<< ip <<endl;
	// cout<<" ip = "<< *ip <<endl;
}
#endif

#if 0
void main(){
	int i=10, j=20;
	//const int* ip = &i;
	//int const * ip = &i;
	int  * const ip = &i; // C-style reference
	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;

	
//	ip = &j; // In-Valid
	*ip = 12345; // valid
	
	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;

}

#endif
#if 0
void main(){
	int i=10, j=20;
	//const int* ip = &i;
	int const * ip = &i;

	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;

	ip = &j; // Valid
//	*ip = 12345; // In-valid
	
	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;

}

#endif

#if 0
void main(){
	int i=10, j=20;
	const int* ip = &i;

	cout<<"i= "<< i <<", &i= "<< &i <<", j= "<< j <<", &j = "<< &j <<endl;
	cout<<"&ip= "<< &ip <<", ip= "<< ip <<", *ip = "<< *ip <<endl;

	ip = &j; // Valid
	*ip = 12345; // In-valid

}
#endif