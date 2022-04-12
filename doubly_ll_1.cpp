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

return 0;
}