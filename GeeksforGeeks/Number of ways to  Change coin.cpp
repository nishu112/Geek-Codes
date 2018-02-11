#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n,rupees;
	cin>>n;
	int coins[n];
	for(int i=0;i<n;++i)
		cin>>coins[i];
	cin>>rupees;
	int coin_changes[rupees+1]={0};
	coin_changes[0]=1;
	for(int i=0;i<n;++i)
		{
		for(int j=coins[i];j<=rupees;++j)
			{
			coin_changes[j]+=coin_changes[j-coins[i]];
			}
		}
	cout<<coin_changes[rupees]<<'\n';
	}
return 0;
}
