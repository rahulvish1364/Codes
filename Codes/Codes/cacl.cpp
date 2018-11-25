#include <iostream>

using namespace std;

void Add(double val1, double val2){
  double result;
  result= val1+val2;
  cout<<"the Sum of the no. is   "<<result<<endl;
  }
  void Sub(double val1, double val2){
    double result;
    result= val1+val2;
    cout<<"the Substraction of the no. is   "<<result<<endl;
    }
    void Mult(double val1, double val2){
      double result;
      result= val1+val2;
      cout<<"the Multiplication of the no. is   "<<result<<endl;
      }
      void Div(double val1, double val2){
        double result;
        result= val1+val2;
        cout<<"the Divison of the no. is   "<<result<<endl;
        }

      int main(){
        int opt;
        double val1, val2;
        cout<<"1 Add \n2 Substract\n3 Multiply\n4 Divide"<<endl;

        cout<<" Enter the  choice ";
        cin>>opt;
        cout<<" Enter the value of 1st variable";
        cin>>val1;
        cout<<" Enter the value of 2nd variable";
        cin>>val1;



        do{

          switch(opt){
            case 1: Add(val1,val2);
            break;
            case 2: Sub(val1,val2);
            break;
            case 3: Mult(val1,val2);
            break;
            case 4: Div(val1,val2);
            break;
            default:
            cout<<"Invalid input \n Choose from given option"<<endl;


          }


        }while(opt)

      }
