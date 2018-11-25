#include <stdio.h>
int Print(char* c);
void main()
{
  char C[20]="Hello World";
  //Print(C);
  int A[]={1,2,3,4,5,13,13};
  int* p1=A;
  printf("%d\n",p1 );
  printf("%d\n",A );
  printf("%d\n",&A );
  printf("%d\n",*p1);
  printf("%d\n",*(A+0));
  printf("%d\n",A[0] );
  printf("%d",*A );

    //printf("%d\n",*(p1+5) );

  //printf("%d\n",A[5]);
  //printf("%d\n",&A[4] );


}
int Print(char* c)
{
  while(*c !='\0')
{
  printf("%c",*c);
  c++;
}
printf("\n");
}
