#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class ReverseString{

  public :
  int len;
  char str[100];
  void take(){
    cout<<"Enter the string to reverse"<<endl;
    cin>>str;
    len=strlen(str);
    cout<<"Reversed string is here"<<endl;
       for(int i=len-1;i>=0;i-- ){

         cout<<str[i];
       }

  }


};



int main(){
   take();
  return 0;
}
