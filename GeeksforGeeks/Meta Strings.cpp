#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str1,str2;
    cin>>str1;
    //cin.ignore(100,'\n');
	cin>>str2;
    if(str1.length()!=str2.length())
        {
        cout<<0<<'\n';
        continue;
        }
    int i=0,flag=1,loc=0;
    int arr[2];
    while(str1[i]!='\0')
        {
        if(str1[i]!=str2[i])
            {
            if(loc==2)
                {
                flag=0;
                break;
                }
            arr[loc]=i;
            ++loc;
            }
        ++i;
        }
    //cout<<"loc="<<loc<<'\n';
    if(loc!=2 || flag && str1[arr[0]]!=str2[arr[1]] || str1[arr[1]]!=str2[arr[0]])
        flag=0;
    cout<<flag<<'\n';
    }

	return 0;
}
