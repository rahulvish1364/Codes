/*This program, is to insert node in the begining of the linkedlist*/
#include<stdio.h>
#include <stdlib.h>
typedef struct node{
  int data;
  struct node* link;
}node;
struct node* root;
void  InsertatBegin(int x){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->link=root;
  root=temp;
  }
void print(){
  struct node* temp=root;
  printf("The list is " );
  while (temp!=NULL) {
    printf(" %d",temp->data);
    temp=temp->link;
  }
  printf("\n");
}
int main(){
root=NULL;
printf("HOw many no. you want to enter\n");
int x,i,y;
scanf("%d",&y );
for ( i = 0; i < y; i++) {
  printf("Enter the no. \n" );
  scanf("%d",&x);
  InsertatBegin(x);
  print(x);
}
}
