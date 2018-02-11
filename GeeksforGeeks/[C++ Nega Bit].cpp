#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {

int t;
cin>>t;
int f,s;
while(t--)
	{
    cin>>f>>s;
    int noOfBits=(log(f)/log(2.0))+1;
    cout<<noOfBits<<'\n';
    for(auto i=0;i<noOfBits;++i)
        s^=(f&(i<<noOfBits));
    cout<<s<<'\n';
	}
return 0;
}
