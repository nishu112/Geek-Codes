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
int key;
struct Node *left;	
struct Node *right;
};

Node *newnode(int key)
	{
	Node *temp=new Node;
	temp->key=key;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
	}
Node *insert(Node *root,int key)
	{
	if(root==NULL)				return newnode(key);
	if(root->key == key)		{ cerr<<"No duplicate allowed!!!!!\n"; return root;}
	if(root->key >= key)			root->left=insert(root->left,key);
	else 						root->right=insert(root->right,key);	
	return root;
	}
void print(Node *root)//Inorder traversal of nodes.
	{
	if(root==NULL)	return;
	print(root->left);
	pf(root->key);
	print(root->right);
	}
int find_min(Node *root,int key)//Find the minimum of A subtree
	{
	while(root->left!=NULL)	root=root->left;
	int temp=root->key;
	root->key=key;
	return temp;
	}
Node *delete_node(Node *root,int &key)//Delete a key from the BST !.
	{
	if(root==NULL)	return NULL;
	if(root->key==key)
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
			root->key=Min;
			root->right=delete_node(root->right,key);
			return root;
			}
		delete root;
		}
	else if(root->key > key)	root->left=delete_node(root->left,key);
	else	root->right=delete_node(root->right,key);
	return root;
	}
bool search(Node *root,int num){
	if(root==NULL)	return 0;
	if(root->key==num)	return 1;
	else if(root->key>num)	return search(root->left,num);
	else	return search(root->right,num);
}

int Count=0;
void Rank(Node *root,int &num){
	if(root==NULL)	return ;
	Rank(root->left,num);
	if(root->key <=num)	++Count;
	else	return;
	Rank(root->right,num);
}

int range(Node *root,int n1,int n2){
	int l,r;	Count=0;
	Rank(root,n1);
	l=Count;Count=0;
	Rank(root,n2);
	r=Count;
	debug2(l,r);
	return search(root,n1)? r-l+1:r-l;
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
			head=insert(head,key);//Insertion in binary tree
			break;
			case 2 ://Print the elements of binary tree in inorder format
		 	print(head);
		 	pfnl();
		 	break;
		 	case 3://Deltetion of elements from binary tree
		 	cin>>key;
		 	head=delete_node(head,key);
		 	break;
		 	case 4:
		 		int num1,num2;
		 		cin>>num1>>num2;
		 		pf(range(head,num1,num2));
		 		pfnl();
		}
}while(n!=5);	
return 0;
}


