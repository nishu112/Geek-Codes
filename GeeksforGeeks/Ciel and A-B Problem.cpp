#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,res;
cin>>a>>b;
res=abs(a-b);
int r;
r=res%10;
if(r==9)
	r-=1;
else
	r+=1;

    	res/=10;
	res=res*10+r;
cout<<res;
return 0;
}
