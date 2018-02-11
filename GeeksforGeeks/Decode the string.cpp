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
    start:
    string str1="",str2="";
    int loc1=0,loc2=0,num;
	bool c=false,d=false;
    int i=0;
    while(str[i]!='\0')
    	{
    	if(str[i]>=48 && str[i]<=57)
    		{
    	 	loc1=i;
    	 	num=str[i]-48;
    	 	c=true;
    	 	d=true;
			}
		if(d && str[i]==']')
			{
			loc2=i;
			d=false;
			}
		++i;
	//cout<<"hi";
		}
	cout<<"loc1="<<loc1<<" "<<loc2<<'\n';
	
	int  j;
	if(c)
		{
		for(j=loc1+2;j<loc2;++j)
		str1=str1+str[j];
	
	while(num--)
		{
		str2=str2+str1;
		}
	cout<<"str1="<<str2<<'\n';
	str.replace(str.begin()+loc1,str.begin()+loc2+1,str2);
	cout<<"str="<<str<<'\n';
		goto start;
		}
	cout<<"mystr="<<str<<'\n';
    }

	return 0;
}
