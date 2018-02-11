#include<iostream>
using namespace std;
void generate(string str,int index)
 {
 	if(index==str.length())
 		{
 		cout<<str<<"\n";
		}
	else
		{
		if(str[index]=='?')
			{
			str[index]='0';
			generate(str,index+1);
			str[index]='1';
			generate(str,index+1);
			}
		else
			generate(str,index+1);
		}
 }
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    generate(str,0);
    }
	return 0;
}
