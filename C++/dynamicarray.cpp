#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void display(int *,int);
void input(int *p,int len){
  int input,y;
  char ch;

  cout<<"Enter the value in array"<<endl;
  for(int i=0;i<len;i++)
  {

    cout<<"Enter"<<i+1<<" Element"<<endl;
    cin>>input;
    *(p+i)=input;

    if(i==len-1)
    {
    cout<<"do you want to input more value"<<endl;
    cin>>ch;

    if(ch=='y')
    {
        len =len*2;
        int *temp= new int[len];
//        int *A= new int[len];
        temp=p;
        int *p = new int[len];
        p=temp;
        free (temp);
}
else
display(p,len);

  }
}
}
void display(int *p,int len){
  for(int i=0;i<len;i++){
  printf("%d\t",*(p+i));
  }
}
int main(){
  int len = 10,y;
  y=len-1;
  int *ptr = new int[len];
  input(ptr,len);
//  display(ptr,len);

  /*for(int i=0;i<len;i++)
  {
  if(i==y)
  {
    y =y*2;
    int *temp= new int[len];
    int *A= new int[y];
    temp=ptr;
    int *ptr = new int[y];
    ptr=temp;
    free (temp);




  }
}3

*/


  return 0;
}

/*
cout<<"do you want to input more value"<<endl;
cin>>ch;

if(ch=='y')
{

  for(int i=0;i<len;i++)
  {
  if(i==len)
  {
    len =len*2;
    int *temp= new int[len];
    int *A= new int[y];
    temp=p;
    int *p = new int[y];
    p=temp;
    free (temp);

*/
