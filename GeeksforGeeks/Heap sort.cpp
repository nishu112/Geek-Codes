#include<iostream>
#include<vector>
using namespace std;
void insert_in_heap(vector<int> &arr)
	{
	int n=arr.size();
	if(n==1)
		return;
	int j=n-1;
	while(j>0 && arr[j]<arr[(j-1)/2])
		swap(arr[j],arr[(j-1)/2]),j=(j-1)/2;
	}
void formheap(vector<int> &arr)
	{
	int n=arr.size();
	int j=1,index;
	while(j<n)
		{
		index=j;
		if(j+1<n)
			index=(arr[j]<arr[j+1])?j:j+1;
		if(arr[(j-1)/2]>arr[index])
			swap(arr[(j-1)/2],arr[index]);
		j=2*index+1;
		}
	}
void heap_sort(vector<int> arr,vector<int> &sort_vector)
	{
	int n=arr.size(),j;
	j=n;
	while(j)
		{
		sort_vector.push_back(arr[0]);
		arr[0]=arr[n-1];
		arr.pop_back();
		--n;
		j=n;
		formheap(arr);
		}
	}
int main()
{
int n;
cin>>n;
int num;
vector<int> v,sort_vector;
for(int i=0;i<n;++i)
	{
	cin>>num;
	v.push_back(num);
	insert_in_heap(v);
	}
heap_sort(v,sort_vector);
for(vector<int> :: iterator itr=sort_vector.begin();itr!=sort_vector.end();++itr)
	cout<<*itr<<" ";
return 0;
}
