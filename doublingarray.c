#include <stdio.h>
void DoubleArray(int* A, int size)
{
  int i;
  for (size_t i = 0; i < size; i++) {
    /* code */
    A[i] =2*A[i];
  }

}
int main()
{
  int A[]={1,2,3,4,5,6,7,8,9,10};
  int size= sizeof(A)/sizeof(A[0]);
  DoubleArray(A,size);
  for(int i=0;i<size;i++)
  {
    printf("%d\n",A[i]);
  }

}
