#include <iostream>
#include <string>
using namespace std;
class HumanBeing {
public: string name;

  void Introduction(/* arguments */) {
    cout<< "Hello I am " <<name<<endl;
  }
};

int main(){
HumanBeing Anil;
Anil.name="Anil";
Anil.Introduction();
HumanBeing Anjali;
Anjali.name="Anjali";
Anjali.Introduction();
return 0;
}
