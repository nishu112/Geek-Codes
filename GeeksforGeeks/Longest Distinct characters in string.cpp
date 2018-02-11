#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int i=0;
    int a[256]={0};
    int count=0,max=0,j=0;
    //int l=str.length();
    while(str[i]!='\0')
        {
        if(a[str[i]]==0)
            {
            a[str[i]]=1;
            count++;
            //if(count==6)
              //  cout<<"str="<<str[i]<<str[i+1]<<" "<<i<<"\n";
            i++;
            }
        else
            {
            i=j+1;
            j++;
            //a[str[i]]=0;
            //cout<<"count="<<count<<"\n";
            if(max<count)
                {
                max=count;
                }
            count=0;
            memset(a,0,256*sizeof(int));
            }
        }
    if(max<count)
        max=count;
    cout<<max<<"\n";
    }

	return 0;
}
