#include<iostream>
using namespace std;
int stack[100],top=-1,n=100;
void push(int val)
{
    if (top>=n-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
    top++;
    stack[top]=val;
    }
    
}
void pop()
{
    if (top<=-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        cout<<"The poped element is: "<<stack[top];
        top--;
    }
    
}
void display()
{
    if(top>=0){
    cout<<"The stack elements are: ";
    for (int i = top; i >=0; i--)
    {
        cout<<stack[i]<<" ";
    }
    }
    else
    {
        cout<<"The stack is empty"<<endl;
    }
    cout<<endl;
    
}
void peek()
{
    if (top==-1)
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        cout<<"The top element is: "<<stack[top]<<endl;
    }
    
}
int main()
{
    int a,b;
    cout<<"\n1 push\n2 pop\n3 display\n4 exit\n5 peek"<<endl;
     while (a!=4) {
    cout<<"Enter your choice"<<endl;
    cin>>a;
    if (a==1)
    {
        cout<<"Enter the element you have to push: ";
        cin>>b;cout<<endl;
        push(b);
    }
    else if (a==2)
    {
        pop();
        cout<<endl;
     }
     else if (a==3)
     {
         cout<<"*****************************"<<endl;
          display();
          cout<<"****************************"<<endl;
     }
     else if (a==5)
     {
        peek(); 
     }
     
     else
     {
         cout<<"You have entered wrong number"<<endl;
     }

    } 
    
    

return 0;
}