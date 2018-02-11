#include<iostream>
#include<algorithm>
#include<bitset>
#include<math.h>
using namespace std;
int check(string s)
	{
	int i=0,l=s.length()-1;
	while(i<l)
		{
		if(s[i]=='1' && s[i+1]=='1')
			return 1;
		i++;
		}
	return 0;
	}
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    string str;
    int i=n;
    if(check(bitset<17>(n).to_string()))
    	{
    	do
    		{
    		i++;	
			}while(check(bitset<17>(i).to_string()));
		}
	cout<<i<<"\n";
	//break;
	}

	return 0;
}
