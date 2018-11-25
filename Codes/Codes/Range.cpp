#include <iostream>
#include <math.h>
using namespace std;

int main(){
long int numb1, numb2;
  cout<<"To find Shakuntula Devi`s NUmber"<<endl;
  cout<<"Enter the intial value of the range"<<endl;
  cin>>numb1;
  cout<<"Enter the FINAL value of the range"<<endl;
  cin>>numb2;
  cout<<"The Shankuntula Devi`s Number beweent  range  "<<numb1<<"and "<<numb2<<endl;
for(int k=numb1;k<=numb2;k++){
int count=0;
int temp=k;
while(temp!=0){
  temp=temp/10;;
  count++;

}
int copy1=k;
int copy2=k;
int temp2;
int fact=1;;
int sum=0;

 for(int i= 0; i<count;i++){
   temp2=copy1%10;

   for(int j=1;j<=temp2;j++){
     fact= fact*j;
}


copy1=copy1/10;
sum +=fact;
fact=1;

}
if(sum==copy2){
  cout<<k<<ends<<ends<<endl;
}

}
return 0;
}
