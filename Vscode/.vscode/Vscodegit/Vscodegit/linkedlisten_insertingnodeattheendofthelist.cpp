#include <iostream>
#include <stdlib.h>

using namespace std;

  struct node{
    int data;
    node* next;
  };

node* Insert(node* head, int data){
    node *last=new node;
    last->data=data;
    last->next=NULL;
    if(head==NULL){
    head=last;
}
  else {
    node *temp2=head;
    while(temp2->next != NULL){
      temp2=temp2->next;
    }
    temp2->next=last;
}
return head;
}
  void Print(node* head){
    cout<<"The list is ";
     while(head!=NULL){
       cout<<ends<<head->data;
       cout<<"Not printing";
       head=head->next;
     }
     cout<<endl;
  }
int main(){
struct node* head=NULL;

  int num, data;

  /*cout<<"Enter the no. of variables"<<endl;
  cin>>num;
  for(int i=0;i<num;i++){
    cout<<"Enter the no.";
    cin>>data;
    Insert(data);
    Print();*/
    Insert(head,4);
    Insert(head,5);
    Insert(head,6);
    Insert(head,7);
    Insert(head,8);
    Insert(head,9);
    Print(head);
  }
