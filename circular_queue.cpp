#include<iostream>
using namespace std;
int cycle_queue[10],front=-1,rear=-1,n=10;
//push
void push(int val)
{
 if (rear==n-1&&front==0)
 {
     cout<<"Stack overflow";
 }
 else if (front==-1&&rear==-1)
 {
     front=0;
     rear=0;
     cycle_queue[rear]=val;
 }
 else if (rear==n-1&&front!=0)
 {
     rear=0;
     cycle_queue[rear]=val;
 }
 else
 {
     rear++;
     cycle_queue[rear]=val;
 }
 
}
//pop
void pop()
{
    if (front==-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    if (front==rear)
    {
         cout<<cycle_queue[front]<<" is deleted"<<endl;
        front++;
        front=-1;
        rear=-1;
    }
    if (front==n-1)
    {
         cout<<cycle_queue[front]<<" is deleted"<<endl;
        front++;
        front=0;
    }
    else
    {
        cout<<cycle_queue[front]<<" is deleted"<<endl;
        front++;
    }
}
void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout<<cycle_queue[i]<<" "<<endl;
    }
    
}
int main()
{
 int a,b;
 while(a!=4)
 {
 cout<<"\n1 push\n2 pop\n3 display\n4 exit"<<endl;;
 cin>>a;
 switch (a)
 {
 case(1):
     cout<<"Enter the element you want to push"<<endl;
     cin>>b;
     push(b);
     break;
 case(2):
    pop();
    break;  
 case(3):
    cout<<"******************************"<<endl;
    display();
    cout<<"******************************"<<endl;
    break; 
 case(4):
  break; 
 
 default:
     cout<<"You have entered wrong number"<<endl;
     break;
 }
 }

return 0;
}