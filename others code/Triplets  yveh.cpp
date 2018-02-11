#include<bits/stdc++.h>
using namespace std;
template<typename T>
void read(T &x)
{
	char ch=getchar();
	for (x=0;ch<'0'||ch>'9';ch=getchar());
	for (;ch>='0'&&ch<='9';x=x*10+ch-'0',ch=getchar());
}
typedef long long ll;
#define MAXN 100010
const int mo=1000000007;
int T,a,b,c;
int A[MAXN],B[MAXN],C[MAXN];
ll suma,sumc,ans;
int main()
{
	read(T);
	while (T--)
	{
		read(a),read(b),read(c);
		for (int i=1;i<=a;i++)
			read(A[i]);
		for (int i=1;i<=b;i++)
			read(B[i]);
		for (int i=1;i<=c;i++)
			read(C[i]);
		sort(A+1,A+a+1);
		sort(B+1,B+b+1);
		sort(C+1,C+c+1);
		suma=0,sumc=0,ans=0;
		for (int i=1,j=1,k=1;j<=b;j++)
		{
			while (i<=a && A[i]<=B[j]) suma=(suma+A[i++])%mo;
			while (k<=c && C[k]<=B[j]) sumc=(sumc+C[k++])%mo;
			ans=(ans+1LL*(i-1)*(k-1)%mo*B[j]%mo*B[j] + suma*(k-1)%mo*B[j] + sumc*(i-1)%mo*B[j] + suma*sumc)%mo;
		}
		printf("%lld\n",ans);
	}
	return 0;
} 
