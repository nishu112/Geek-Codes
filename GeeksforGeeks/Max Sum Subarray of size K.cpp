#include <bits/stdc++.h>

using namespace std;
#define		 sc(x)			   scanf("%d",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
int arr[100005];
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	int n,k;
	sc2(n,k);
	rep(i,n)	sc(arr[i]);
	int sum=0;
	rep(i,k)	sum+=arr[i];
	int M=sum;
	rep2(i,k,n)
		{
		sum+=arr[i];
		sum-=arr[i-k];
		M=max(M,sum);
		}
	printf("%d\n",M);
	}
return 0;
}



