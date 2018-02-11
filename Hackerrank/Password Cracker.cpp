#include <bits/stdc++.h>
using namespace std;
vector <string> v;
vector <string> st;
void sear(string b)
    { 
    if(b.length()==0)  { for (auto it=st.begin();it!=st.end();it++) cout <<*it<<" ";  return;}
    int m=0,i;
    for( i=1;i<=b.length();i++)
        {
        if(find(v.begin(),v.end(),b.substr(0,i))!=v.end()){ m=1;st.push_back(b.substr(0,i));break;}}
        if(m==0) {cout<<"WRONG PASSWORD";return;} 
        else {b.erase(0,i);sear(b);return;}
        }
int main() {
int t;cin>>t;
    while(t--)
        {
        int n;cin>>n;
        for(int i=0;i<n;i++)
            {
            string a;cin>>a;
            v.push_back(a);
        }
        string b;cin>>b; 
        sear(b);
         cout<<endl;
        v.clear();st.clear();
     }
    return 0;
}
