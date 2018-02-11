#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	string str1,str2;
	cin>>str2;
	int n=-1;
	do
    	{
    	n++;
    	n=str.find(str2,n);
    	cout<<n<<"\n";
		}while(n!=-1);
	return 0;
}
