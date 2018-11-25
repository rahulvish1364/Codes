#include<iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]) {
int numb,count=0;
cout<<"enter any number"<<endl;
cin>>numb;
int temp=numb;
int temp2=numb;
int temp3;
int sum=0;
while(temp!=0){
  temp=temp/10;
  count++;
  }
  for (int i = 0; i < count; i++) {
    /* code */
    temp3=temp2%10;
    sum +=pow(temp3,3);
    temp2 /=10;
  }
  if(sum==numb){
    cout<<"The number is Armstrong Number  "<<sum<<endl;
  }
    else
  cout<<"The Number is not Armstrong Number   "<<sum;
  return 0;
}
