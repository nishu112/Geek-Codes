#include<iostream>
using namespace std;
int main()
{
	char str[101];// max limit of a string is 100
	cin>>str;
	int i=0,j=0;
	int a[257]={0};
	while(str[i]!='\0')
		{
		if(a[str[i]]==1)	
			{
			i++;	
			}
		else
			{
			a[str[i]]=1;
			str[j]=str[i];
			i++;
			j++;
			}
		}
	str[j]='\0';
	cout<<str;
	return 0;
}
