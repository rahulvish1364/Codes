#include <stdio.h>
void main()
{
  int A[]={2,3,4,5,6,7};
  //printf("%d\n",A );
  //printf("%d\n",&A);
  //printf("%d\n",A[0] );
  //printf("%d\n",*A);
  for (int i = 0; i < 5; i++) {
    /* code */
    printf("%d\n",&A[i] );
    printf("%d\n",*A+i );
    printf("%d\n",A+i);
    printf("%d\n",A[i]);
  }
}
