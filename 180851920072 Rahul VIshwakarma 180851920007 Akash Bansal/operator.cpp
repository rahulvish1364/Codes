#include <iostream>
using namespace std;

class rahul
{
public:
  int a1;
  int a2;
  rahul (int x=0, int y=0): a1(x), a2(y) {}
  void display()
  {
    cout<<a1<<endl<<a2<<endl;
  }
  rahul operator +(rahul rec)
  {
  rahul temp;
  temp.a1= a1+ rec.a1;
  cout<<rec.a1<<endl;
  cout<<"HEllo"<<a1<<endl;

  temp.a2= a2+ rec.a2;
  cout<<rec.a2;
  return temp;
  }
};

int main(int argc, char const *argv[]) {
  /* code */
  rahul obj1;

  rahul obj2(50, 60);
  rahul sum =obj1 + obj2;
  sum.display();

  return 0;
}
