#include<iostream>
#include<unordered_map>
using namespace std;
int fact(int num)
	{
	if(num==0||num==1)
		return 1;
	return num*fact(num-1);
	}
int ncr(int n)
	{
	return fact(n)/(fact(n-3)*6);
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
	if(n<3)
		{
		cout<<0<<'\n';
		continue;
		}
	int count=0;
	for(int i=0;i<n-1;i++)	
		{
		unordered_map<int,bool> mymap;
		for(int j=i+1;j<n;j++)
			{
			if(mymap.find(a[i])!=mymap.end())
			    ++count;
			else
			    mymap[a[i]+a[j]]=true;
			}
		}
	cout<<(ncr(n)-count)<<"\n";
    }
	return 0;
}
