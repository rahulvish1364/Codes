#include <stdio.h>
int SumofElements(int A[], int size)
{
  int i;
  int sum=0;
  for ( i = 0; i < size; i++) {
    sum +=A[i];
  }
  return sum;
}
int main()

{
  int A[]={1,2,3,4,5};
  int size = sizeof(A)/sizeof(A[0]);
  int total= SumofElements(A,size);
  printf("The sum of the Array is = %d",total);

}
