#include <stdio.h>
#include <string.h>
int main()
{
  char C[5];
  C[0]='J';
  C[1]='O';
  C[2]='H';
  C[3]='N';
  C[4]='\0';
  int l=strlen(C);
printf("%s\n",C );
printf("%d\n",l );

char c1[]="Hello my name is rahul";
char* c2;
c2=c1;
c2[0]='A';

int l1=strlen(c1);
printf("%d\n",l1 );
//printf("%s\n",c1 );
/*for (int  i = l1; i >= 0&&c1[i]!=0; i--) {
printf("%c",c1[i]);
*/

}
