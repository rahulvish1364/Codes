#include <iostream>
#include<string>
using namespace std;
class Human{
  public :
  string name;
  int age;
  public :
   Human(){
     cout << "Default Constructor " << '\n';
     name="noname";
     age=0;
   }
   Human(string iname){
     cout<<"COntrustor with name as parameter"<<endl;
     age=0;
     name=iname;
   }
   Human(int iage){
     cout<<"COntrustor with age as parameter"<<endl;
     age=iage;
     name="noname";
   }
   Human(int iage, string iname){
     cout<<"COntrustor with name and age as parameter"<<endl;
     age=iage;
     name=iname;
   }
   void display(){
     cout<<"name is "<<name<<endl<<"age is "<<age;
     cout<<endl;
   }
};
//void Human::display(){

int main(){
  Human Anil;
  Anil.display();

  Human rahul("Rahul");
  rahul.display();

  Human(23);
  rahul.display();

  Human kjk(23,"Rahul");
  rahul.display();
}
