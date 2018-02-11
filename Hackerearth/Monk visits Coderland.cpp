#include<iostream>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	int n;
	scanf("%d",&n);
	int c[n],l[n];
	for(int i=0;i<n;++i)
		scanf("%d",&c[i]);
	for(int i=0;i<n;++i)
		scanf("%d",&l[i]);
	long long int cost=0,min=c[0];
	for(int i=0;i<n;++i)
		{
		if(c[i]<min)
			min=c[i];
		cost+=min*l[i];
		}
	printf("%lld\n",cost);
	}
	return 0;
}
