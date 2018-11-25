#include <stdio.h>
int main()
{
  int a=10;
  int *p=&a;
  printf("%d\n",a); // this obviously prints the a
  printf("%d\n",p); // this prints the address of the p
  printf("%d\n",*p);// this points to the a anfd prints the value of a
  *p=123;
  printf("%d\n",a);
}
