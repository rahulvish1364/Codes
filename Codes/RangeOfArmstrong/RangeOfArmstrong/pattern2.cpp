#include<iostream>
using namespace std;
int main()
{
  int n , i, j, space = 1;
  cout << "enter thevalue of n" << endl;
  cin >> n;
  space = n - 1;
  for (j = 1; j <= n; j++)
  {
    for (i = 1; i <= space; i++)
    {
      cout << " ";
    }
    space--;
    for (i = 1; i <=(2 * j - 1); i++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  space = 1;
  for (j = 1; j <= (n - 1); j++)
  {
    for (i = 1; i <= space; i++)
    {
      cout << " ";
    }
    space++;
    for (i = 1; i <= (2 * (n - j) - 1); i++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
























