
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node *newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void postorder(Node *node)
{
	if (node == NULL)
	{
		return;
	}

	postorder(node->left);

	postorder(node->right);

	cout << node->data << " ";
}

void inorder(Node *node)
{
	if (node == NULL)
	{
		return;
	}

	inorder(node->left);

	cout << node->data << " ";

	inorder(node->right);
}

void preorder(Node *node)
{
	if (node == NULL)
	{
		return;
	}

	cout << node->data << " ";

	preorder(node->left);

	preorder(node->right);
}

int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->left->left = newNode(3);
	root->right = newNode(4);
	root->right->right = newNode(5);
	/*     1
		  2 4
		 3   5
	*/

	cout << "preorder= " << endl;
	preorder(root);
	cout << endl;

	cout << "inorder= " << endl;
	inorder(root);
	cout << endl;

	cout << "postorder= " << endl;
	postorder(root);

	return 0;
}
