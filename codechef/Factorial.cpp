#include <bits/stdc++.h>

using namespace std;

#define		 sc(x)			   scanf("%d",&x)

#define 	 pfnl()			   putchar('\n');
#define 	gc()				getchar()

template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}

int arr[157];
int len=0;
void fact(int n)
{
	int carry,temp;
	for(int i=2;i<=n;++i)
		{
		carry=0;
		for(int j=0;j<=len;++j)
			{
			carry+=arr[j]*i;
			arr[j]=carry%10;
			carry/=10;
			}
		while(carry)
			{
			arr[++len]=carry%10;
			carry/=10;
			}
		}
}

int main() {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	int n;
	len=0;
	arr[0]=1;
	scan(n);
	fact(n);//cout<<"len="<<len<<'\n';
	while(len>=0)
		{
		printf("%d",arr[len]);
		--len;
		}
	
	pfnl();
	}
return 0;
}



