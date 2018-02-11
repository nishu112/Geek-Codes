#include <vector>
#include <iostream>

#include<set>
using namespace std;


int main() {
multiset<string> mset;    
int n;
cin>>n;
string str;
while(n--)
    {
    cin>>str;
    mset.insert(str);
	}
int q;
cin>>q;
while(q--)
    {
    cin>>str;
    cout<<mset.count(str)<<'\n';
	}
return 0;
}

