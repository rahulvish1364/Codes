#include <stdio.h>
void main()
{

char c ='a';
char* p1=&c;
printf("The value of c is = %c \n",c );
printf("The address of c is %p\n",p1 );
printf("The calling of c value from point p1 is %c \n",*p1);
*p1 = 'd';
printf("%c\n",c);
}
