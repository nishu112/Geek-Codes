//Not complete
#include<iostream>
#include<malloc.h>
#include<cmath>
using namespace std;
struct tree
	{
	int data;
	tree *left;
	tree *right;
	}*root=NULL;
tree* newNode(int val)
	{
	struct tree *node=(tree*)malloc(sizeof(tree));
	node->data=val;
	node->left=node->right=NULL;
	return node;
	}
tree* insert(struct tree *root,int val)
	{
	if(root==NULL)
		{
		return newNode(val);
		}
	else if(root->data>=val)
		root->left=insert(root->left,val);
	else
		root->right=insert(root->right,val);
	return root;
	}
void preorder(tree *root)
	{
	if(root!=NULL)
		{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
		}	
	}
int sum=0;
void sum_level(tree* root,int level,int i)
	{
	if(root==NULL)
		return ;
	else if(i==level)
		{
		cout<<"val="<<root->data<<'\n';
		sum+=root->data;
		}
	else if(i>level)
		return ;
	sum_level(root->left,level,i+1);
	sum_level(root->right,level,i+1);
	}
int main()
{
int num,n;
int i=0;
	cin>>n;
	while(i<n)
		{
		cin>>num;
		root=insert(root,num);
		i++;
		}
	cout<<"\n";

	return 0;
}
