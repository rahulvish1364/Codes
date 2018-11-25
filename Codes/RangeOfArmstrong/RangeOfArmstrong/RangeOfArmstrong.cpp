#include<iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int numb, count = 0,x,y;
  cout << "enter the starting range" << endl;
  cin >> x;
  cout << "enter the end of range" << endl;
  cin >> y;
  numb = x;
  cout << "The number is Armstrong Number  " << endl<<endl;
  for (int j = x; j<=y ; j++)
  {
   
    int temp = j;
    int temp2 = j;
    int temp3;
    int sum = 0;
    while (temp != 0) {
      temp = temp / 10;
      count++;

    }
    //cout << count;
    for (int i = 0; i < count; i++) {
      temp3 = temp2 % 10;
      sum += pow(temp3, 3);
      temp2 /= 10;
    }
    if (sum == j) {
      cout << sum << endl;
    }
  }
  return 0;
}
