#include <iostream>
using namespace std;

void fun(int x=500, int y=600, int z=700);
/*
void fun(int, int, int); // funiii
void fun(int, int, int=700); // funii(700)
void fun(int, int=600, 700); 
void fun(int=500, 600, 700); 
*/
void main(){
	fun(10, 20, 30);
	fun(40, 50);
	fun(60);
	//fun(100, , 200);
	fun();
}

void fun(int x, int y, int z){
	cout<<"x= "<< x <<", y= "<< y <<", z= "<< z <<endl;
}