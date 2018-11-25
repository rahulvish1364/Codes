#include <stdio.h>
#include <conio.h>
void main(){
  int i,j,k,num, np=0;
  char sp=' ';
  printf("Enter the no. of rows\n" );
  scanf("%d",&num);
  int n=num;
  for(i=1;i<=num;i++){
    for(j=1;j<=n;j++){
      printf("%c",sp);
    }
    n--;
      for(k=1;k<=i;k++){
       np++;
        printf("%d ",i);


    }
    printf("\n" );
  }
  getch();

}
