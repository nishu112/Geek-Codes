#include <bits/stdc++.h>
using namespace std;
int arr[20009];
int main() {
long long int sum=0,s;
int t,n,temp,flag;
scanf("%d",&t);
while(t--)
	{
	flag=-1;
	scanf("%d%lld",&n,&s);
	temp=n;
	while(temp--)	scanf("%d",&arr[n-temp-1]);
	sort(arr,arr+n);
	temp=0;
	while(temp<n)
		{
		sum+=arr[temp];
		if(sum+arr[temp]*(n-temp-1)==s)
			{
			flag=arr[temp];
			break;
			}
		++temp;
		}
	printf("%d\n",flag);
	}
return 0;
}



