//INCOMPLETE
//Binary Tree K level sum
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int level;
    cin>>level;
	string str;
	cin>>str;
	int i=1,l;
	l=str.length();
	int count=0;
	int num=0,flag=0,sum=0,temp=1;
	while(i<l)
		{
		flag=0;;
		if(str[i]=='(' && str[i+1]!=')')
			{
			count++;
			temp=1;
			}
		if(count==level && temp==1)
			{
			if(str[i+1]>=48 && str[i+1<=57])
				i++;
			num=0;
			//cout<<"next"<<str[i-1]<<" "<<str[i]<<" "<<str[i+1]<<" "<<i<<'\n';
			while(str[i]>=48 && str[i]<=57)
				{
				num+=(str[i]-48)*pow(10,flag);
				++flag;
				++i;
				}
			//cout<<"Num==================="<<num<<'\n';
			sum+=num;
			}
		if(str[i]==')' && str[i-1]!='(')
			{
			count--;
			if(flag!=0)
				i--;
			temp=0;
			}
		
		i++;
		}
	cout<<sum<<'\n';
}
	return 0;
}
