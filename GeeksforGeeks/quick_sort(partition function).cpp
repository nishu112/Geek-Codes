//NOT COMPLETE
#include<iostream>
#include<vector>
using namespace std;
int part(vector<int> & v,int start,int end)
	{
	int pivot=end;
	int part_index=start;
	for(int i=start;i<end;++i)
		{
		if(v[i]<=v[pivot])
			{
			swap(v[i],v[part_index]);
			++part_index;
			}
		}
	swap(v[part_index],v[pivot]);
	return part_index;
	}
void quicksort(vector<int> &v,int start,int end)
	{
	if(start>=end)
		return;
	int index=part(v,start,end);
	quicksort(v,start,index-1);
	quicksort(v,index+1,end);
	}
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;++i)
		cin>>arr[i];
	quicksort(arr,0,n-1);
	for(vector<int> ::iterator itr=arr.begin();itr!=arr.end();++itr)
		{
		cout<<*itr<<" ";
		}
	}
	return 0;
}
