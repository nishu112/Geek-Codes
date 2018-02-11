#include<iostream>
#include<algorithm>
using namespace std;
string hex(int num)
    {
    string hex_num;
    int i=0;
    while(num)
        {
        int r=num%16;
        char ch;
        if(r<10)
            {
            ch=r+48;
			hex_num+=ch;
			}
        else
            {
        	ch=r+87;
            hex_num+=ch;
            }
        num/=16;
        }
    //reverse(hex_num.begin(),hex_num.end());
    cout<<"hex="<<hex_num<<'\n';
    return hex_num;
    }
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int a[27]={0};
    string str,final;
    cin>>str;
    int i=0;
    char ch=str[0];
    while(str[i]!='\0')
        {
        if(str[i]==ch)
            a[str[i]-96]++;
        if(str[i+1]!=ch || str[i+1]=='\0')
            {
            final+=ch;
            final+=hex(a[ch-96]);
            a[ch-96]=0;
            ch=str[i+1];
            }
        i++;
        }
    reverse(final.begin(),final.end());
    cout<<final<<'\n';
    }
	return 0;
}
