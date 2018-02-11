#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
void check_prime(vector<bool> &prime)
	{
	int n=prime.size()-1;
	prime[0]=false;
	prime[1]=false;
	int j=2;
	while(j<=n && j*j<=n)
	{
	for(int i=2*j;i<=n;i+=j)
		{
		prime[i]=false;
		}
	++j;
	}
}
int main()
{
int t;
cin>>t;
vector<bool> prime(1000001);
fill(prime.begin(),prime.end(),true);
check_prime(prime);
while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	{
    	cin>>a[i];
		}
    int sum=0,len=1,max_len=1,prime_sum=0;
    if(prime[a[0]])
        prime_sum=a[0],sum=a[0];
    for(int i=1;i<n;++i)
    	{
    	if(a[i-1]<a[i])
    		{
    		len++;
    		if(prime[a[i]])
    			sum+=a[i];
    		if(len>=max_len)
    			{
    			if(max_len==len)
    				prime_sum=max(prime_sum,sum);
    			else
    			    prime_sum=sum;
    			max_len=len;	
    			}
			}
    	else
			{
			len=1;
			sum=0;
			if(prime[a[i]])
    			{
    			sum=a[i];
    			if(max_len<=len)
    			    {
    				max_len=len;	
    				if(max_len==len)
    				    prime_sum=max(prime_sum,a[i]);
    				else
    				    prime_sum=a[i];
    			    }
				}
			}
		//cout<<len<<" "<<max_len<<" "<<prime_sum<<" "<<sum<<'\n';
		}
	cout<<max_len<<" "<<prime_sum<<'\n';
    }

	return 0;
}
