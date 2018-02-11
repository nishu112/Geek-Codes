#include<iostream>
#include<malloc.h>
using namespace std;
struct tree
	{
	int data;
	tree *left;
	tree *right;
	}*root=NULL;
void insert(int val)
	{
	struct tree *node;
	struct tree *current,*parent;
	node=(struct tree *)malloc(sizeof(struct tree));
	node->data=val;
	node->left=NULL;
	node->right=NULL;
	if(root==NULL)
		{
			root=node;
		}
	else
		{
		current=root;
		while(1)
			{
			parent=current;
			if(parent->data > val)
				{
				current=current->left;
				if(current==NULL)
					{
					parent->left=node;
					return;
					}
				}
			else
				{
				current=current->right;
				if(current==NULL)
					{
					parent->right=node;
					return;
					}
				}
			}
		}
	}
void search(struct tree *root,int val)
	{
	if(root==NULL)
		{
		cout<<"NOT FOUND";
		return;
		}
	else
		{
		if(root->data==val)
			{
			cout<<"Found it";
			return ;
			}
		else if(root->data>val)
			search(root->left,val);
		else 
			search(root->right,val);
		}
		
	}
void preorder(struct tree *root)
	{
	if(root!=NULL)
		{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
		}
	}
void inorder(struct tree *root)
	{
	if(root!=NULL)
		{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
		}
	}
void postorder(struct tree *root)
	{
	if(root!=NULL)
		{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
		}
	}
int main()
{
	int num,n;
	int i=0;
	cin>>n;
	while(i<n)
		{
		cin>>num;
		insert(num);
		i++;
		}
	cout<<"\n";
	//cout<<((root->data));
	//preorder(root);
	printf("\nPreorder traversal: ");
    preorder(root);
	printf("\ninorder traversal: ");
    inorder(root);
    printf("\npostorder traversal: ");
    postorder(root);
	int val;
    cout<<"\nEnter element to be searched in the tree:";
    cin>>val;
    search(root,val);
	return 0;
}
