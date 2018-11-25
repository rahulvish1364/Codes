#include<iostream>
using namespace std;

namespace TestExample{
  class TestAPI{
  public: void TestFunc(){
    cout<<"Test function being called";
  }
};
}
main(){
  TestExample:: TestAPI ex;
  ex.TestFunc();
  return 0;
}
