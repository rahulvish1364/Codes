#include <stdio.h>
int SumofElements(int A[])
{
  int i;
  int sum=0;
  printf("In SOE Size of array = %d and Size of of element is =%d \n",sizeof(A),sizeof(A[0]));
  int size = sizeof(A)/sizeof(A[0]);
  for ( i = 0; i < size; i++) {
    sum +=A[i];
  }
  return sum;
}
int main()

{
  int A[]={1,2,3,4,5};
  int total= SumofElements(A);
  printf("The sum of the Array is = %d \n",total);
printf("In Main Size of array = %d and Size of of element is =%d \n",sizeof(A),sizeof(A[0]));
}
