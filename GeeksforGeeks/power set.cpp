#include<iostream>
#include<algorithm>
#include<set>
//#include<>
using namespace std;
bool possible(int arr[],int n,int sum)
	{
	bool part[sum+1][n+1];
	for(int i=0;i<=n;i++)
		part[0][i]=true;
	for(int i=1;i<=sum;i++)
		part[i][0]=false;
	for(int i=1;i<=sum;i++)
		{
		for(int j=1;j<=n;j++)
			{
			part[i][j]=part[i][j-1];
			if(i>=arr[j-1])
				part[i][j]=part[i][j] || part[i-arr[j-1]][j-1];
			}
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
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
	int tot_sum=0;
	for(int i=0;i<n;i++)
		tot_sum+=a[i];
 	if(tot_sum&1==1)
 		{
 	//	cout<<"yep";
 		cout<<"NO\n";
 		continue;
		}
	bool find=possible(a,n,tot_sum/2);
	if(find==true)
		cout<<"YES\n";
	else
		cout<<"NO\n";
    }

	return 0;
}
