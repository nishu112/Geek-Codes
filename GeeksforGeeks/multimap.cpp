#include<iostream>
#include<map>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    std::map<int,int> mymm;
	int n;
	std::cin>>n;
	int num;
	for(int i=0;i<n;i++)
		{
		std::cin>>num;
		mymm[num]++;
		}
	int sum=0;
	for(std::map<int,int> :: iterator itr=mymm.begin();itr!=mymm.end();++itr)
		{
		if((*itr).second>1)
			sum+=(*itr).second-1;
		}
	std::cout<<n-sum<<'\n';
    }

	return 0;
}
