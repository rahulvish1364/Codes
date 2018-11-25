#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vect1{1,2,3,4,5,6};
  vector<int> vect2;
  for (int i = 0; i <vect1.size(); i++) {
    /* code */
    vect2.push_back(vect1[i]);
  }
  cout<<"The value of new  vector is  ";
  for(int i=0;i<vect1.size();++i){
    cout<<vect2[i];
  }
}
