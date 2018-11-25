#include <iostream>
#include <string>
using namespace std;
class Human{
  public :
   string name;
   void Introduce(){
     cout<<"Hi my name is "<<name<<endl`  ;
   }
 };
   int main(){
     Human anil; // that's how we create an object in stack
     Human *bunty =new Human();// that's how we create object in heap (dynamic mempry allocation)
    anil.name="anil";
    anil.Introduce();
    bunty->name="Bunty";
    bunty->Introduce();
    return 0;
   }
