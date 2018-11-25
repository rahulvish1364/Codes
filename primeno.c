#include <stdio.h>
void main(){
  int i, n;
  printf("Enter the number \n" );
  scanf("%d",&n);
  i=2;
  while(i<n){
    if(n%i==0){
      printf("Not a prime number");
      break;
    }
    i++;

  }
  if (n==i)
  printf("The number is prime \n");
}
