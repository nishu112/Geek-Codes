#include<iostream>
using namespace std;
struct node
	{
	int data;
	node *left;
	node *right;
	};
void sw(int *a,int *b)
	{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	}
void swa(node* a,node* b)
	{
	node temp;
	temp=*a;
	*a=*b;
	*b=temp;
	}
int main()
{
int a=3,b=54;
int *p=&a,*q=&b;
//sw(p,q);
node *node1,*node2;
node1=new node;
node1->data=5;
node2=new node;
node2->data=10;
cout<<node1->data<<" "<<node2->data<<'\n';
swa(node1,node2);
cout<<node1->data<<" "<<node2->data<<'\n';
////cout<<*p<<" "<<*q;
return 0;
}
