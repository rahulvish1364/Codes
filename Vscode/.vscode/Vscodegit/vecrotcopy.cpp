#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> vect1{1,2,3,4,5,6};

    //vector<int> vect2(vect1);
    vector<int> vect2;
    vect2=vect1;
    cout<<"the original vector is :";
  for(int i=0;i<vect1.size();i++){
      cout<<ends<<vect1[i];

  }
  cout<<endl;
  cout<<"The copied vector is :";
  for(int i=0;i<vect1.size();i++){
      cout<<ends<<vect2[i];

  }

  cout<<endl;
vect1[3]=45;
for(int i=0;i<vect1.size();i++){
    cout<<ends<<vect1[i];

}
}
