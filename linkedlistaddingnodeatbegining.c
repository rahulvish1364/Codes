#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int data;
  struct node* next;
}node;
struct node* head=NULL;
void Insert(int x){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=head;
  head=temp;

}
void Print(){
  struct node* temp=head;
  int i;
  printf("list is    " );
  while(temp!=NULL){
  printf(" %d ",temp->data);
  temp=temp->next;
}
printf("\n");
  }


void main(){
  int n,i,x;
  printf("Enter the no. of variable to store\n");
  scanf("%d",&n );
  for (i = 0; i <= n; i++) {
    printf("Enter the no.");
    scanf("%d",&x );
    Insert(x);
  //  printf("the numbers are %d"&x);
    Print();
  }
}
