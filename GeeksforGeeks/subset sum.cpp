#include<iostream>
#include<set>
#include<map>
void find_subset(int a[],int n)
	{
	std::map<int,int> myset;
	int sum;
	int num=(1<<n);
	for(int i=0;i<num;++i)
		{
		int j=0;
		sum=0;
		while(j<n)
			{
			if((i&(1<<j))!=0)
				{
				//std::cout<<"values "<<i<<" "<<(1<<j)<<" "<<(i&(1<<j))<<'\n';
				sum+=a[j];
				}
			j++;
			}
		//std::cout<<sum<<" ";
		myset[sum]++;
		}
	std::map<int,int> :: iterator itr;
	for(itr=myset.begin();itr!=myset.end();++itr)
		{
		while((*itr).second!=0)
			{
			std::cout<<(*itr).first<<" ";
			--((*itr).second);
			}
		}
	std::cout<<'\n';
	}
int main()
{
int t;
std::cin>>t;
while(t--)
	{
	int n;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
		std::cin>>a[i];
	find_subset(a,n);
	}
	return 0;
}
