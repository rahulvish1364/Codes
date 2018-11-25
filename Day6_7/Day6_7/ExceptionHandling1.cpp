#include <iostream>
using namespace std;

/*
double Div(double num, double den){
	if(den)
		return num / den;
	return 0.0;
}
*/

double Div(double num, double den){
	if(0.0 < den)
		return num / den;
	else
	if( 0 == den)
			throw 101;
	else
		//throw -1.1;
		throw "ABCD"; // assert
}

void main(){
	double i = 10, j= -1;

	cout<<"i= "<< i <<", j= "<< j <<endl;
	
	try{
		cout<<" Div(i,j): "<< Div(i, j) <<endl;
	}catch(int ex){
		cout<<"Integer exception caught"<<endl;
	}catch(double d){
		cout<<"Double ex caught"<<endl;
	}catch(...) {
		cout<<"Catch All"<<endl;
	}
	cout<<"i= "<< i <<", j= "<< j <<endl;
}