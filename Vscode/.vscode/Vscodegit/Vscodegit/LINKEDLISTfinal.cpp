#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head=NULL;
int len;
void Append();
void Display();
void AddAtAfter(){}
void AddAtBegin(){}
int Length();
void Delete(){}

int main(){
int ch;
  while(1){
    cout<<"Single Linked List Operation"<<endl;
    cout<<"1.Append"<<endl;
    cout<<"2.Add at Begining"<<endl;
    cout<<"3.Add at After"<<endl;
    cout<<"4.Display"<<endl;
    cout<<"5.Length of Linked List"<<endl;
    cout<<"6.Delete"<<endl;
    cout<<"7.Quit"<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>ch;
  switch (ch) {
    case 1: Append();
            break;
    case 2: AddAtBegin();
            break;
    case 3: AddAtAfter();
            break;
    case 4: Display();
            break;
    case 5: len =Length();
    cout<<"The length is "<<len<<endl<<endl;

            break;
    case 6: Delete();
            break;
    case 7: exit(1);
            break;
    default: cout<<"Invalid Choice"<<endl<<endl;
  }
}
}
void Append(){
  node* temp=new node;
  cout<<"Enter the node data: ";
  cin>>temp->data;
  temp->next=NULL;
  if(head==NULL){ //list is empty
    head=temp;
  }
   else{
     node* temp2=head;
     while(temp2->next != NULL){
       temp2=temp2->next;
     }
     temp2->next=temp;

   }
}
int Length(){
  int count=0;
  node* temp=head;
  while(temp != NULL){
    count++;
    temp=temp->next;
  }
  return count;
}
void Display()
{
  node* temp=head;
  if(temp == NULL){
    cout<<"List is Empty"<<endl;
  }
  else
  {
    while(temp != NULL){
      cout<<temp->data<<"-->";
      temp=temp->next;
    }
    cout<<endl<<endl;
  }
}
