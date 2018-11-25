#include <iostream>
#include <string>
using namespace std;

class Human
{
private :
int age;
string name;
public :
Human(){

  name ="noname";
  age=0;
  cout<<"constructor is called when we create new object"<<endl;
}
  void display(){
    cout<<name<<endl<<age<<endl;
  }
};

int main(){

Human anil;
anil.display();

}
