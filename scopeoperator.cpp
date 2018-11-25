// this is to define the methof outside the class
#include <iostream>
using namespace std;
class Human{
  public :
  string name;
  void introduce();
};
void Human::introduce(){
  cout<<"Hi my name is "<<name<<endl;

}

int main(){
Human anil;
anil.name="Anil";
anil.introduce();
Human *Rekha= new Human();
Rekha->name="Rekha";
Rekha->introduce();
return 0;


}
