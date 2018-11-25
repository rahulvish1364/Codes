#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* Insert(node* head, int x){
    node* temp=new node;
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}
 void Print(node* head){
    cout<<"List is ";
    while(head!=NULL){
        cout<<ends<<head->data;
        head=head->next;
    }
    cout<<endl;

}
int main(){
  node* head=NULL;
    int num, x;
    cout<<"Enter the number of node"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Enter the number"<<endl;
        cin>>x;
        head=Insert(head,x);
        Print(head);

    }


}
