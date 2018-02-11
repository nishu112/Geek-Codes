#include<iostream>
#include<map>
std::map<int,int> mymap;
void subset(int a[],int n,int l,int sum)
	{
	if(l==n)
		{
		mymap[sum]++;// we store all the subsets  by using map container
		return ;
		}
	subset(a,n,l+1,sum);
	subset(a,n,l+1,sum+a[l]);
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
    for(int i=0;i<n;i++)
    	std::cin>>a[i];
    subset(a,n,0,0);
    for(std::map<int,int>:: iterator  itr=mymap.begin();itr!=mymap.end();++itr)
    	{
    	while((*itr).second!=0)
    		{
    		std::cout<<(*itr).first<<" "; // print the value
    		--((*itr).second);  // decrease the frequency by one
			}
		}
    }
	return 0;
}
