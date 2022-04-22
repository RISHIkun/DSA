#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
node* create_node(node* root,int val)
{
    if (root==NULL)
    {
        return new node(val);
    }
    
    if (val<root->data)
    {
        root->left=create_node(root->left,val);
    }
    else
    {
        root->right=create_node(root->right,val);
    }
    return root;
}
void preorder(node* node)
{
    if (node==NULL)
    {
        return;
    }
    
    preorder(node->left);
    cout<<node->data<<" ";
    preorder(node->right);
    
}


int main()
{
node* root=NULL;
root=create_node(root,5);
create_node(root,3);
create_node(root,6);
create_node(root,2);
create_node(root,1);
create_node(root,4);
  /*
        5
       / \
      3   6
      /\
     2 4
    /
   1  
*/  
preorder(root);
return 0;
} 