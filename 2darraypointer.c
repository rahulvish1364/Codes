#include <stdio.h>
void main()
{
int B[2][3]={

{1,2,3},{4,5,6}
};
printf("the address printed when using B alone %d\n",B );
printf("the adress printed when using *B  %d\n",*B );
printf("the address printed when using %d\n",B[0] );
printf("the adress printed when using %d\n",&B[0][0] );
printf("the address printed when using *(B+1)\n",*(B+1) );

}
