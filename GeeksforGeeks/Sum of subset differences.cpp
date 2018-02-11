#include<iostream>
using namespace std;
int sumDiff(int S[], int n)
{
	int sum=0;
	for(int i=0;i<n-1;i++)
		{
		for(int j=i+1;j<n;j++)
			{
			sum+=(S[j]-S[i])*(1<<(j-i-1));
			}
		}
	return sum;
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
    cout<<sumDiff(a,n)<<'\n';
    }

	return 0;
}
