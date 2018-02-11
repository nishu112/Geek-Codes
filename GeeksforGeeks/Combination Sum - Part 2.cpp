#include<iostream>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
set<string> final;
string str;
void find_sum(int a[],int arr[],int i,int find,int n,int cur_sum)
{
if(cur_sum==find)
		{
		str="";
		str+='(';
		for(int j=0;j<i;j++)	
			{
			if(arr[j])
				{
				str+=to_string(a[j]);
				if(j!=i-1)
					str+=" ";
				}
			}
		str+=')';
		final.insert(str);
		}
if(i<n)
	{
	if(cur_sum<find)
		{
		arr[i]=0;
		find_sum(a,arr,i+1,find,n,cur_sum);
		arr[i]=1;
		find_sum(a,arr,i+1,find,n,cur_sum+a[i]);
		}
	else
		return;
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
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);
    int b;
    cin>>b;
    int arr[n];
	final.clear();
    find_sum(a,arr,0,b,n,0);
    set<string> ::iterator itr;
    for(itr=final.begin();itr!=final.end();++itr)
    	{
    	cout<<*itr;
		}
	if(final.empty())
		cout<<"Empty";
    cout<<'\n';
    }

	return 0;
}
