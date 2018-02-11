//INCOMPLETE
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int i=0,j=1,l=str.length();
    char ch=str[0];
    int flag=0;
    while(i<l)
    	{
    	if(str[j]==ch)
    		{
    		flag=1;
			}
		else
			{
			if(flag==1)
				{
				flag=0;
				str.erase(str.begin(),str.begin()+j);
				}
			j=i;
			ch=str[i];
			}
		j++;
		}
	i=0;
	cout<<str;
	cout<<'\n';
    }

	return 0;
}
