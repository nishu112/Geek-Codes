#include <bits/stdc++.h>
using namespace std;
int arr[100009];
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
long long n;
scanf("%d",&t);
while(t--)
	{
	scanf("%lld",&n);
	for(int i=0;i<n;++i)	scanf("%d",&arr[i]);	
	long long  sum=(n*(n+1))/2;
	 
	printf("%lld\n",sum);
	}
return 0;
}



