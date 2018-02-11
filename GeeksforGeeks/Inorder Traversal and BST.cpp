#include<iostream>
#include<vector>
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
vector<int> v;
void inorder(struct tree *root)
	{
	if(root!=NULL)
		{
		inorder(root->left);
		v.push_back(root->data);
		inorder(root->right);
		}
	}
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    vector<int> arr;
    int a[1201]={0},key=0;
    int num;
    int i=0;
    root=NULL;
    arr.clear();
    v.clear();
    while(i++ <n)
    	{
    	cin>>num;
    	if(key<=1)
    		{
    		a[num]++;
    		if(a[num]==2)
    			key=2;
			}
    	root=insert(root,num);
    	arr.push_back(num);
		}
	inorder(root);
	if(v==arr && key!=2)
		cout<<"1\n";
	else
		cout<<"0\n";	
    }
	return 0;
}
