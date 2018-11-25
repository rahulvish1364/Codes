#include <iostream>
using namespace std;
#if 0
void fun() {
#define A 101
}

void main(){
	printf("A= %d\n", A);
}
#endif

//#define GETMAX(x, y) ( x > y ? x : y ) 

template <typename T>
inline T GETMAX(T x, T y) {
	return ( x > y ? x : y ) ;
}

/*
inline int GETMAX(int x, int y) {
	return ( x > y ? x : y ) ;
}

inline double GETMAX(double x, double y) {
	return ( x > y ? x : y ) ;
}*/

void main(){
	int i=10, j=20;
	double d=24.1, e=1.1;

	cout<<"i= "<< i <<", j= "<< j <<endl;
	
	cout<<" GETMAX(i++,j++): "<< GETMAX(i++, j++) <<endl;
						// i++ > j++ ? i++ : j++
	cout<<"i= "<< i <<", j= "<< j <<endl;
	
	cout<<" GETMAX(d,e): "<< GETMAX(d,e) <<endl;
}

/*
P1: 10, 20
	20
	11, 21
	> 30
P2: 10, 20
	21
	11, 21
	> 4
P3: error
P4: 10, 20
	21
	11, 22

	
*/


void main1(){
	int i=10, j=20;
	double d=24.1, e=1.1;

	cout<<"i= "<< i <<", j= "<< j <<endl;
	cout<<"d= "<< d <<", e= "<< e <<endl;

	/*
	cout<< "(i > j ? i : j)= "<< (i > j ? i : j) <<endl;
	cout<< "(d > e ? d : e)= "<< (d > e ? d : e) <<endl;
	*/
	//i = 12345;
	cout<<" GETMAX(i,j): "<< GETMAX(i,j) <<endl;
	//cout<<" GETMAX(d, e): "<< GETMAX(d, e) <<endl;
}