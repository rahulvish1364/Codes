#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void Insert(int x){
    node* temp=new node;
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Print(){
    node* temp=head;
    cout<<"List is ";
    while(temp!=NULL){
        cout<<ends<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

}
int main(){
    head=NULL;
    int num, x;
    cout<<"Enter the number of node"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Enter the number"<<endl;
        cin>>x;
        Insert(x);
        Print();

    }


}
