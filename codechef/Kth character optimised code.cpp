#include <bits/stdc++.h>

using namespace std;

int main() 
{
char arr[]={'c','a'};
long long  n,temp;
int index,t;
scanf("%d",&t);
while(t--)
	{
	index=0;
	scanf("%lld",&n);
	if((n&(n-1))==0)	index=1;
	else
		{
		while(!(n&1))	n>>=2;
		temp=(3+n)/4;
		if(4*temp==n+3)	index=1;
		}
	printf("%c\n",arr[index]);
	}
return 0;
}



