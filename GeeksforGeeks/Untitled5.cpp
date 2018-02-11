#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    char s[200],str[200];
    cin>>s;
    int j=0;
    int l=strlen(s)-1;
    for(int i=0;i<=l;i++)
        {
        if(s[i]=='a')
            {
            if(i==l)
            	{
            	str[j]=s[i];
            	j++;
            	}
            else if(s[i+1]!='c'  && i+1<=l)
                {
                //cout<<"my="<<str[i+1]<<" "<<i+1<<endl;
                str[j]=s[i];
                j++;
                }
            else
                i++;
            }
        else if(s[i]!='b')
            {
            str[j]=s[i];
            j++;
            }
        }
    str[j]='\0';
    cout<<str<<"\n";
    }

	return 0;
}
