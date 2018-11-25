#include <iostream>
#include <stdlib.h>

using namespace std;

  struct node{
    int data;
    node* next;
  };
  node* Insert(node* head, int data){
   struct node* last=new node;
    last->data=data;
    last->next=NULL;
    if(head==NULL){
    head=last;
}
  else {
    struct node* temp2=head;
    while(temp2->next != NULL){
      temp2=temp2->next;
    }
    temp2->next;
}
}
  void Print(node* head){
    cout<<"The list is ";
     while(head != NULL){
       cout<<ends<<head->data;
       cout<<"Not printing";
       head=head->next;
     }
     cout<<endl;
  }
int main(){
  struct node* head=NULL;

  int num, data;

  cout<<"Enter the no. of variables"<<endl;
  cin>>num;
  for(int i=0;i<num;i++){
    cout<<"Enter the no.";
    cin>>data;
    Insert(head,data);
    Print(head);
  }
}
