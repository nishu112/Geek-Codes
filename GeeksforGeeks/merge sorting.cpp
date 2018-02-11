#include<iostream>
#include<algorithm>
using namespace std;
void merge(int arr[],int p,int q,int r)
	{
	int n1=r-p+1;
	int n2=q-r;
	int a[n1],b[n2];
	int i;
	i=p;
	while(i<=r)
		{
		a[i-p]=arr[i];
		i++;
		}
	while(i<=q)
		{
		b[i-r-1]=arr[i];
		i++;
		}
	i=p;
	int x=0,y=0;
	while(x<n1 && y<n2)
    if(a[x]<=b[y])
		arr[i++]=a[x++];
	else
		arr[i++]=b[y++];		
	while(x<n1)
		arr[i++]=a[x++];
	while(y<n2)
		arr[i++]=b[y++];
	}
void mergesort(int arr[],int p,int q)
	{
	if(p==q)
		return;
	int r=(p+q)/2;
	mergesort(arr,p,r);
	mergesort(arr,r+1,q);
	merge(arr,p,q,r);
	}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
std::cout<<"Sorted elements are:\n";
mergesort(a,0,n-1);
for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
return 0;
}
