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

struct RB{
	int key;
	bool color;
	RB* left;
	RB* right;
};

RB* newnode(int key){
	RB *temp=new RB;
	temp->key=key;
	temp->color=1;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

bool isred(RB *temp){
	if(temp==NULL)	return 0;
	return (temp->color==1);
	}

RB *rotate_left(RB *temp){
	RB *root =temp->right;
	RB *root_left=root->left;
	swap(temp->color,root->color);
	root->left=temp;
	temp->right=root_left;
	return root;
}

RB *rotate_right(RB *temp){
	//debug2(temp->key,temp->left->key);
	RB *root =temp->left;
	RB *root_right=root->right;
	swap(temp->color,root->color);
	root->right=temp;
	temp->left=root_right;
	return root;
}

void change_color(RB *temp){
	temp->left->color=0;
	temp->right->color=0;
	temp->color=1;
}


RB* insert(RB* root,int &key){
	if(root==NULL)	return newnode(key);
	assert(root->key!=key);
	if(root->key >key)	root->left=insert(root->left,key);
	else	root->right=insert(root->right,key);
	if(isred(root->right) && !isred(root->left))	root=rotate_left(root);
	if(isred(root->left)  && isred(root->left->left))	root=rotate_right(root);
	if(isred(root->left)  && isred(root->right) )	change_color(root);
	return root;
}

void print(RB *root)
	{
	if(root==NULL)	return;
	print(root->left);
	pf(root->key);
	print(root->right);
	}

int main() {
//std::ios::sync_with_stdio(false);
RB *root=NULL;
int n,key;
do
{
	sc(n);
	switch(n)
		{
			case 1 :
			sc(key);
			root=insert(root,key);//Insertion in binary tree
			//debug(root->key);
			break;
			case 2 ://Print the elements of binary tree in inorder format
		 	print(root);
		 	pfnl();
		 	break;
		 	/*case 3://Deltetion of elements from binary tree
		 	cin>>key;
		 	head=delete_node(head,key);*/
		}
}while(n!=4);	
return 0;
}


