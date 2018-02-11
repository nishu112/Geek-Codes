#include <bits/stdc++.h>

using namespace std;
#define      sc(x)	       scanf("%d",&x)

int main() {
int t;
scanf("%d ",&t);
char s[1005],c;
int count,n;
while(t--)
	{
	fgets(s,sizeof(s),stdin);
	cout<<s<<'\n';
    scanf("%c %d ",&c,&n);
	char *p;
	int i=0;
	count=0;
	cout<<s<<" "<<c<<" "<<n<<'\n';
	while(s[i] && count!=n)
		{ 
		if(s[i]==c)	{p=&s[i+1];++count;}
		++i;
		}
	if(*p)
	cout<<p<<'\n';
	else
		cout<<"Empty string\n";
	}
return 0;
}
