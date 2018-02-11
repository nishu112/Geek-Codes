#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
	cin>>n;
	int f=1,s=1,temp;
	string str;
	int count=0;
	while(1)
		{
		count+=log10(f)+1;
		if(count>=n)
			{
			n-=count-floor(log10(f))-1;
			str=to_string(f);
			cout<<str[n-1];
			break;
			}
		temp=f+s;
		f=s;
		s=temp;
		}
	cout<<'\n';
    }

	return 0;
}
