#include<iostream>
#include<set>
#include<algorithm>
int main()
{
int t;
std::cin>>t;
while(t--)
    {
    int n;
    std::cin>>n;
    int num;
    std::set<int> a;
    for(int i=0;i<n;i++)
    	{
		std::cin>>num;
		num=num<0 ? -num :num;
		a.insert(num);
		}
	std::cout<<a.size()<<'\n';
    }
	return 0;
}
