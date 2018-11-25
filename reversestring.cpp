#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int main(){
  int len;
  char str[100];
cout<<"Enter the string to reverse"<<endl;
cin>>str;
len=strlen(str);
cout<<"Reversed string is here"<<endl;
       for(int i=len-1;i>=0;i-- ){
         cout<<str[i];
       }
     }
