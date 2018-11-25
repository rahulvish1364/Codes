#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
int numb;
cout<<"To find Shakuntula Devi`s NUmber "<<endl;
cout<<"Enter the number"<<endl;
cin>>numb;
int count=0;
int temp=numb;
int copy1=numb;
while(temp!=0){
  temp=temp/10;;
  count++;

}

int temp2;
int fact=1;;
int sum=0;

 for(int i= 0; i<count;i++){
   temp2=numb%10;

   for(int j=1;j<=temp2;j++){
     fact= fact*j;


   }


numb=numb/10;
sum +=fact;
fact=1;

}
if(sum==copy1){
  cout<<"The number is Shakuntula Devi`s Number  "<<copy1<<endl;
}
  else
cout<<"The Number is not shakunulas Devi`s Number   "<<copy1;

  return 0;
}
