#include <iostream>
#include <stdlib.h>

using namespace std;

  struct node{
    int data;
    node* next;
  };
  node* Insert(node* head, int data){
    node* temp1=new node;
    temp1->data=data;
    temp1->next=head;
    node* temp2=head;

    if(head==NULL)
    {
      head =temp1;
      return head;
    }

    while(temp2->next!=NULL){
      temp2=temp2->next;

    }
    temp2->next=temp1;
    temp1->next=NULL;

  }
  void Print(node* head){
    cout<<"The list is ";
     while(head!=NULL){
       cout<<ends<<head->data;
       head=head->next;
     }
     cout<<endl;
  }
int main(){
  node* head=NULL;

  int num, x;

  cout<<"Enter the no. of variables"<<endl;
  cin>>num;
  for(int i=0;i<num;i++){
    cout<<"Enter the no.";
    cin>>x;
    Insert(head,x);
    Print(head);
  }
}
