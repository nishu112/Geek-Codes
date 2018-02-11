#include<iostream>
void find(int arr[],int sum,int n)
	{
	bool tot_sum[sum+1][n+1];
	for(int i=0;i<=n;i++)
		tot_sum[0][i]=true;
	for(int i=1;i<=sum;i++)
		tot_sum[i][0]=false;
	for(int i=1;i<=sum;i++)
		{
		for(int j=1;j<=n;j++)
			{
			tot_sum[i][j]=tot_sum[i][j-1];
			if(arr[j-1]<=i)
				tot_sum[i][j]=tot_sum[i][j] || tot_sum[i-arr[j-1]][j-1];
			}
		}
	for(int i=0;i<=sum;i++)
		{
		if(tot_sum[i][n]==true)
			std::cout<<i<<" ";
		}
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
    int sum=0;
    for(int i=0;i<n;i++)
    	{
		std::cin>>a[i];
		sum+=a[i];
		}
	find(a,sum,n);
	std::cout<<'\n';
    }
	return 0;
}
