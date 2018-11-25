#include <iostream>

using namespace std;

 int main(){
     int operat;
     double v1, v2 ,result;
     cout<<"enter the operation"<<endl<<"1 Add"<<endl<<"2 subtract"<<endl<<"3 multiply"<<endl<<"4 divide"<<endl;
     cin>>operat;
     cin>>v1;
     cout<<"Enter the second variable ";
     cin>>v2;

         switch(operat){
             case 1: result = v1+v2;
                  cout<<"Enter the first variable ";
                  cout<<"The sum of the variable is"<<result<<endl;
             break;
             case 2: result = v1-v2;
             cout<<"The Difference is "<<result<<endl;
             break;
             case 3: result = v1*v2;
             cout<<"The product is "<<result<<endl;
             case 4: result= v1/v2;
             cout<<" The dividen is"<<result<<endl;

         }
     //}while(operat)
   }
