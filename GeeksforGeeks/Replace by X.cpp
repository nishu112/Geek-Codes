#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    string str,s;
    cin>>str;
    cin>>s;
    str.erase(remove(str.begin(),str.end(),s),str.end()));
    cout<<str;
    }

	return 0;
}
