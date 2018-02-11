#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_multimap<int,int> mymap;
mymap.insert({1,2});
mymap.insert({1,4});
for(unordered_multimap<int,int>::iterator itr=mymap.begin();itr!=mymap.end();++itr)
	{
	cout<<itr->first<<" "<<itr->second<<'\n';
	}

	return 0;
}
