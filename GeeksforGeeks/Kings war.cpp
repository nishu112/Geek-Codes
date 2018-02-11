#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    //int num;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);
	int num=a[0],count=0;
	for(int i=0;i<n;i++)
		{
		if(a[i]==num)	
			{
			count++;
			}
		else
			break;
		}
	if(a[n-1]==num)
		{
		cout<<0<<"\n";
		continue;
		}
	cout<<"count="<<count<<"\n";
	num=a[n-1];
	for(int i=n-1;i>=0;i--)
		{
		if(num==a[i])
			count++;
		else
			break;
		}
	n-=count;
	cout<<"count="<<n<<"\n";
	cout<<count<<"\n";
    }

	return 0;
}
