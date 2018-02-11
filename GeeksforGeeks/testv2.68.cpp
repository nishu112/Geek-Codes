#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
	int t;
        cin>>t;
        while(t--)
        {
            string str;
            cin>>str;
            int count=0,len=str.length();
            
            while(len!=0)
            {
            	int num=(str[len-2]-48)*10+(str[len-1]-48);
                if(((str[len-2]-48)*10+(str[len-1]-48))%4==0)
                    {
                    cout<<"num="<<num<<'\n';
                    count++;
					}
                len--;
            }
            cout<<count<<endl;
        }
	return 0;
}
