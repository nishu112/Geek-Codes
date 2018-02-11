#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int l=str.length();
    int a[l]={0};
    string str1,str2;
    cin>>str1>>str2;
    int l1=str1.length(),l2=str2.length();
    int n=-1;
	do
    	{
    	n++;
    	n=str.find(str1,n);
    	if(n!=-1)
    		{
    		for(int i=n;i<n+l1;i++)
    			{
    			a[i]=1;
				}
			}
		}while(n!=-1);
	n=-1;
	do
    	{
    	n++;
    	n=str.find(str2,n);
    	if(n!=-1)
    		{
    		for(int i=n;i<n+l2;i++)
    			{
    			a[i]=1;
				}
			}
		}while(n!=-1);
	int i=0,count;
	while(str[i]!='\0')
		{
		if(a[i]==0)
			{
			count++;
			cout<<str[i];
			}
		i++;
		}
	if(count==0)
		cout<<-1;
	cout<<"\n";
    }
	return 0;
}
