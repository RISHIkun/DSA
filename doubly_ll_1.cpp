#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node* prev;

  node(int val){
    data=val;
    next=NULL;
    prev=NULL;
  }
};
void insert_at_end(node* &head,int val){
  node* new_node=new node(val);
  node* temp=head;
  while (temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=new_node;
  new_node->prev=temp;
}
void insert_at_head(node* &head,int val)
{
  node* new_node=new node(val);
  new_node->next=head;
  if (head!=NULL)
  {
    head->prev=new_node;
  }
  head=new_node;
}
void deleat_at_head(node* &head)
{  
  node* todelete=head;
  head=head->next;
  head->prev=NULL;
  delete todelete;

}
void deletion(node* head,int position)
{
 if (position==1)
  {
    deleat_at_head(head);
  }
  node* temp=head;
  int count=1;
  while (temp!=NULL&&count!=position)
  {
    temp=temp->next;
    count++;
  }
  temp->prev->next=temp->next;
  if (temp->next!=NULL)
  {
    temp->next->prev=temp->prev;
  }
   
  
  
}
void display(node* head)
{
  node* temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  
}
int main()
{
  node* head=NULL;
  insert_at_head(head,1);
  insert_at_head(head,2);
  insert_at_head(head,3);
  insert_at_head(head,4);
  insert_at_end(head,77);
  display(head);
  deletion(head,2);
  display(head);
deleat_at_head(head);
display(head);
return 0;
}
