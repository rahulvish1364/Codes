#include <stdio.h>
//#ifndef MAXSIZE
#define MAXSIZE 101
int A[MAXSIZE];
int top=-1;
void Push(int x){
if (top==MAXSIZE-1) {

  printf("Error: stack overflow\n");
  return;
}
  A[++top];
}
void pop() {
  if (top==-1) {
    printf("Error: No element to pop\n");
    return;
  }
  top--;
}
int Top(){
  return A[top];
}
void Print(){
  int i;
  printf("Stack:  " );
  for(i=0;i<=top;i++)
  {
  printf("%d",A[i]);

}
printf("\n");
}
int main(){
  Push(2);Print();
  Push(5);Print();
  Push(10);Print();
  Push(27);Print();
  Push(22);Print();
  pop();Print();
  Push(2);Print();
  pop();
  Print();
}
