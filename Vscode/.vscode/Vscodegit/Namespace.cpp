#include <iostream>
using namespace std;
namespace myns{
  int gf=10;
  namespace rahul{
    int gf=90;

  }
}


int main(){
using namespace myns;
using namespace ::myns::rahul;
cout<<"The value of the gf is "<<gf<<endl;
cout<<"The value of the gf is "<<fd<<endl;
return 0;

//std::cout << "/* message */" << '\n';
}
