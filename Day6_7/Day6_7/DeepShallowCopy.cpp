#include <iostream>
#include <cstring>
using namespace std;

class String {
	char *m_p;
public:
	String() :m_p(NULL){}
	String(char *p) : m_p(  new char[ strlen(p) + 1]) {
		strcpy(m_p, p);
	}
//	String(String &rhs) :m_p(rhs.m_p){} // Shallow Copy
	String(String &rhs) :m_p(new char[strlen(rhs.m_p) + 1]){ 
		strcpy(m_p, rhs.m_p); // Deep Copy
	}

	~String() {
		if(m_p) {
			cout<<" Deleted string is: "<< m_p <<endl;
			delete [] m_p;
		}
	}
};

void main(){
	String str1;
	String str2( "Hello ");
	String str4(str2);

	cout<<"---------------"<<endl;
}


