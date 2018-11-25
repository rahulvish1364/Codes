#include <stdio.h>
void main()
{
  int a=20;
  int* p = &a;
  int** p0=&p;
  int*** p1=&p0;
  printf("%d\n",a );
  printf("%d\n",sizeof(int));
  printf("%p\n",p );
  printf("%d\n",*p);
  printf("%d\n",**p0 );
  printf("%d\n",***p1 );
  printf("%p",p0);
  printf("%d\n",p1 );
  printf("\n%p\n",p1);
  ***p1=234;
  printf("%d\n",a);
  printf("%d\n",sizeof(int) );
  printf("%d\n",p1 );
  p1 +=12;
  printf("%d\n",p1);
  printf("%d\n",p1-12);
}
