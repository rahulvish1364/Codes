#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> g1 ;
  for (int i = 1; i <= 5; i++) {
    g1.push_back(i);
}
cout<<endl;
cout<<endl;
cout<<"THe vector is the test run";
for (int i = 0; i <5; i++) {

  cout<<g1[i]<<endl;
}
    cout<<"The vector from start to the end  :";
    for(auto i=g1.begin();i !=g1.end(); ++i){
      cout<< *i<<ends<<ends;


    }
    cout<<"The COnstant value of the vector from start to the end  :";
    for(auto i=g1.cbegin();i !=g1.cend(); ++i){
      cout<< *i<<ends<<ends<<endl;
    }
    cout<<"The value of  vector from end to the start   :";
    for(auto i=g1.rbegin();i !=g1.rend(); ++i){
      cout<< *i<<ends<<ends<<endl;
    }
    cout<<"The COnstant vector from end  to the start:";
    for(auto i=g1.crbegin();i !=g1.crend(); ++i){
      cout<< *i<<ends<<ends<<endl;
    }
    }
