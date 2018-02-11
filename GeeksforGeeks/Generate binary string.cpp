#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int count=0;
    int i=0;
    int length=str.length()-1;
    while(str[i]!='\0')
    	{
    	if(str[i]=='?')
    		count++;
    	i++;
		}
	int a[count+1]={0};
	i=0;
	int j=0;
	while(str[i]!='\0')
		{
		if(str[i]=='?')
			{
			a[j]=i;
			j++;
			}
		i++;
		}
	cout<<"j="<<j<<"\n";
	int tot_num=pow(2,count);
	for(int i=0;i<tot_num;i++)
		{
		string question=bitset<32>(i).to_string();
		int y=31;
		string newstring=str;
		for(int x=j-1;x>=0;x--)
			{
			newstring[a[x]]=question[y--];
			}
		cout<<newstring<<" ";
		}
	cout<<"\n";
    }
	return 0;
}
