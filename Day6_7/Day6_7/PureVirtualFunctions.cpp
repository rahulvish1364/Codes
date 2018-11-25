#include <iostream>
using namespace std;

struct Shape {
//	virtual void draw() { cout<<"Shape drawn"<<endl; }
	virtual void draw() = 0; // Pure virtual function
	virtual void fun() { cout<<"Shape fun"<<endl; }
};

struct Triangle : Shape {
	void draw() { cout<<"Triangle drawn"<<endl; }
};

struct Circle: Shape {
	void draw() { cout<<"Circle drawn"<<endl; }
};

void show(Shape &sRef)	{	sRef.draw();}

void main(){
//	Shape sObj;
	Triangle tObj;
	Circle cObj;

	show(sObj);
	show(tObj);
	show(cObj);
}