#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
//cin>>t;
regex r("from");
string str="i am following this tutorial from GeeksForGeeks";
if(regex_search(str.begin(),str.end(),r))	cout<<"Yes";
else	cout<<"No";
return 0;
}


