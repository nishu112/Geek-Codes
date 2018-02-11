#include<iostream>
#include<bitset>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    string str;
    str=bitset<7>(n).to_string();
    int i=0;
    int l=str.length()-1,flag=0;
    cout<<"str="<<str<<endl;
    while(i<l)
        {
        if((str[i]=='1') && (str[i+1] =='1'))
            {
            flag=1;
            break;
            }
        i++;
        }
    if(flag==0)
        cout<<"1\n";
    else
        cout<<"0\n";
    }

	return 0;
}
