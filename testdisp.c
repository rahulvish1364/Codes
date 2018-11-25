#include <stdio.h>
#include <conio.h>
/*void main()
   {
     printf(" \n Hello");
      disp();
}
void disp()
{
  printf(" \n Hi");
  main(); }*/

/*void main(int a){
  int a;
  a=10;

}
void main()
{
int i = 100, j =
200;
const int *p=&i;
p = &j;
printf("%d",*p);
}*/
int y;
void f3();
void main(){
  int x,*px;
  int **ppx;
  x=10;
  y=1000;
  px=&x;
  ppx=&px;
  f3(ppx);
  printf("the value of 11 statement is %d\n",*px );
}
void f3(int **pp)
{
  *pp=&y;
  printf("the value of statement 16 is %d\n",**pp);
}
