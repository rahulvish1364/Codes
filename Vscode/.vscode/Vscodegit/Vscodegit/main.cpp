#include <iostream>
#include <stdlib.h>

using namespace std;

  struct node{
    int data;
    node* next;
  };
  struct node* head=NULL;
  void Insert()
  {
   node* last=new node;
   cout<<"Enter the data  ";
   cin>>last->data;
    last->next=NULL;
    if(head==NULL){
    head=last;
}
  else {
    struct node* temp2=head;
    while(temp2->next != NULL){
      temp2=temp2->next;
    }
    temp2->next=last;
}
}
  void Print(){
    node* temp=head;
    if(temp==NULL){
      cout<<"List is empty "<<endl;
    }
    else{
      cout<<"The list is ";
     while(temp!= NULL){
       cout<<temp->data<<"-->";
       temp=temp->next;
     }
     cout<<endl;
  }
}
int main(){
  int num, data;
  cout<<"Enter the no. of variables"<<endl;
  cin>>num;
  for(int i=0;i<num;i++){
    Insert();
    Print();
  }
}
