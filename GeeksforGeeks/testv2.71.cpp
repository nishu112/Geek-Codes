#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{

unordered_map<int,bool> map;
map[4]=3;
map[4]^=1;
cout<<map[4];

	return 0;
}
