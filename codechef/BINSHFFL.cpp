#include <bits/stdc++.h>
 
using namespace std;
#define 	 ll				   long long
 
#define 	gc()				getchar()
 
 
 
template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}
 
int bit_count(long long x)
{
    int tmp = 0;
    while (x)
    {
        tmp += (x % 2);
        x >>= 1;
    }
    return tmp;
}
int lo_bit(long long x)
{
    int tmp = 0;
    while (x)
    {
        if (x % 2 == 1) return tmp;
        tmp += 1;
        x >>= 1;
    }
}
 
int main()
{
int t;
scan(t);
ll A,B;
while(t--)
	{
	scan(A);
	scan(B);
	if(A==B){
		printf("0\n");
		continue;
	}
	
	if(!B || (B==1 && A!=0)){
		printf("-1\n");
		continue;
	}
	if(B==1 && A==0)	{
	printf("1\n");
	continue;
	}
	int setBitsA=bit_count(A);
	int setBitsB=bit_count(B);
	
	
	 
	setBitsB+=lo_bit(B);
		//printf("%d",1+setBitPositionB);
	if(setBitsA>=setBitsB){
		printf("2");
	}
	else{
		printf("%d",setBitsB-setBitsA);
	}
	printf("\n");
	}
return 0;
}
 
