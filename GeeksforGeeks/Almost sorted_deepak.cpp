#include<iostream>
using namespace std;
int main()
 {
	int t;
        cin>>t;
        while(t--)
        {
           int x,t;
           char c;
           cin>>x>>c;
           if(c=='U')
           {
               if(x<11)
                  t=11-x;
               else if(x>11)
                  t=(19-x)+8;
               else
                  t=0;
           }
           if(c=='D')
           {
               if(x>11)
                  t=x-11;
               else if(x<11)
                  t=x+11;
               else
                  t=0;
           }
           cout<<t<<endl;
        }
	return 0;
}
