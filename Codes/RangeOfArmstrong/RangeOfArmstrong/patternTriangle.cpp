#include<iostream>
using namespace std;
void main()
{
  int i,j, ln;
  cout << "enter the number of line in triangle" << endl;
  cin >> ln;
  for (i = 1; i <= ln; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }


}
