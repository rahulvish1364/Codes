/*This program, is to insert node in the begining of the linkedlist*/
#include<stdio.h>
#include <stdlib.h>
typedef struct node{
  int data;
  struct node* link;
}node;

node* InsertatBegin(node* root,int x){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->link=root;
  root=temp;
  return root;
  }
void print(node* root){
  printf("The list is " );
  while (root!=NULL) {
    printf(" %d",root->data);
    root=root->link;
  }
  printf("\n");
}
int main(){
 node* root=NULL;
printf("HOw many no. you want to enter\n");
int x,i,y;
scanf("%d",&y );
for ( i = 0; i < y; i++) {
  printf("Enter the no. \n" );
  scanf("%d",&x);
  root =InsertatBegin(root,x);
  print(root);
}
}
