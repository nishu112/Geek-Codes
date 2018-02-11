#include<iostream>
#include<vector>
using namespace std;
bool find_sum(vector<int> divisors,int n,int sum)
	{
	bool part[sum+1][n+1];
	for(int i=0;i<=n;i++)
		part[0][i]=true;
	for(int i=1;i<=sum;i++)
		part[i][0]=false;
	for(int i=1;i<=sum;i++)
		for(int j=1;j<=n;j++)
			{
			part[i][j]=part[i][j-1];
			if(divisors[j-1]<=i)
				part[i][j]=part[i][j] || part[i-divisors[j-1]][j-1];
			}
	return part[sum][n];
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
	vector<int> divisors;
	int sum=0;
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
			{
			divisors.push_back(i);
			sum+=i;
			}
	if(sum<=n)
		cout<<"Not Weird";
	else
		if(find_sum(divisors,divisors.size(),n))
			cout<<"Not Weird";
		else
			cout<<"Weird";
	cout<<'\n';
    }
	return 0;
}
