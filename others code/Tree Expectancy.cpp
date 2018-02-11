//problem EXPTREE, contest JULY17. By ccz181078 
#include<bits/stdc++.h>
typedef long long i64;
const int p1=1e9+7,p2=1e9+9;
i64 pw(i64 a,int n,int p){
	i64 v=1;
	for(;n;n>>=1,a=a*a%p)if(n&1)v=v*a%p;
	return v;
}
int cal(i64 n,int p){
	int z=pw((n*4-6)%p,p-2,p);
	n%=p;
	return z*n%p*(n-1)%p;
}
int  main(){
	int T;
	for(scanf("%d",&T);T;--T){
		i64 n;
		scanf("%lld",&n);
		printf("%d %d\n",cal(n,p1),cal(n,p2));
	}
	return 0;
} 
