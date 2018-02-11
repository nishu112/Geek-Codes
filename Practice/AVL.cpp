#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define	     pf(x)			   printf("%d ",x)
#define	     pf2(x,y)		   printf("%d %d ",x,y)
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z)
#define 	 pfnl()			   putchar('\n');
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

struct Node
{
int data;
struct Node *left;	
struct Node *right;
int height;
};

Node *newnode(int key)
    {
    Node *temp=new Node;
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=1;
    return temp;
    }
 
int height(Node *root)//return height of Node
    {
    if(root==NULL)  return 0;;
    return root->height;
    }
Node *left_rotate(Node *root)
    {
    Node *x=root->right;
    Node *y=x->left;
    x->left=root;
    root->right=y;
    root->height=1+max(height(root->left),height(root->right));
    x->height=1+max(height(x->left),height(x->right));
    return x;
    }

Node *right_rotate(Node *root)
    {
    Node *x=root->left;
    Node *y=x->right;
    x->right=root;
    root->left=y;
    root->height=1+max(height(root->left),height(root->right));
    x->height=1+max(height(x->left),height(x->right));
    }

Node* insertToAVL( Node* root, int key)
{
if(root==NULL)  return newnode(key);
if(root->data==key) return root;
else if(root->data >key) root->left=insertToAVL(root->left,key);
else root->right=insertToAVL(root->right,key);

root->height=1+max(height(root->left),height(root->right));
int balance=height(root->left)-height(root->right);

if(balance>1 && root->left->data >key )//LL case
    {
    return right_rotate(root);
    }
 if(balance > 1 && root->left-> data <key)//LR case
    {
    root->left=left_rotate(root->left);
    return right_rotate(root);
    }
 if(balance <-1 && root->right ->data <key) //RR case
    {
    return left_rotate(root);
    }
 if(balance<-1 && root->right ->data> key)//RL case
    {
    root->right=right_rotate(root->right);
    return left_rotate(root);
    }
return root;
}
void print(Node *root)//Inorder traversal of nodes.
	{
	if(root==NULL)	return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
	}
int find_min(Node *root,int key)//Find the minimum of A subtree
	{
	while(root->left!=NULL)	root=root->left;
	int temp=root->data;
	root->data=key;
	return temp;
	}
int getfactor(Node *root){
	return (height(root->left)-height(root->right));
}
Node *delete_node(Node *root,int &key)//Delete a key from the BST !.
	{
	if(root==NULL)	return NULL;
	if(root->data==key)
		{
		if(root->left==NULL && root->right==NULL)
			return NULL;
		else if(root->left==NULL && root->right!=NULL)
			{
			Node *temp=root->right;
			return temp;
			}
		else if(root->left!=NULL && root->right==NULL)
			{
			Node *temp=root->left;
			return temp;
			}
		else
			{
			int Min=find_min(root->right,key);
			root->data=Min;
			root->right=delete_node(root->right,key);
			return root;
			}
		//root->height=1+root->height;
		delete root;
		}
	else if(root->data > key)	root->left=delete_node(root->left,key);
	else	root->right=delete_node(root->right,key);
	root->height=1+max(height(root->left),height(root->right));
	int balance=height(root->left)-height(root->right);
	if(balance <-1 && getfactor(root->right)<0)
		{
		root=left_rotate(root);
		}
	if(balance <-1 && getfactor(root->right)>=0)
		{
		root->right=right_rotate(root->right);
		root=left_rotate(root);
		}
	if(balance >1 && getfactor(root->left)>=0)
		{
		root=right_rotate(root);
		}
	if(balance >1 && getfactor(root->left)<0)
		{
		root->left=left_rotate(root->left);
		root=right_rotate(root);
		}
	
	return root;
	}
int main() {
//std::ios::sync_with_stdio(false);
Node *head=NULL;
int n,key;
do
{
	sc(n);
	switch(n)
		{
			case 1 :
			sc(key);
			head=insertToAVL(head,key);//Insertion in binary tree
			break;
			case 2 ://Print the elements of binary tree in inorder format
		 	print(head);
		 	pfnl();
		 	break;
		 	case 3://Deltetion of elements from binary tree
		 	cin>>key;
		 	head=delete_node(head,key);
		}
}while(n!=4);	//Press 4 to exit the loop
return 0;
}


