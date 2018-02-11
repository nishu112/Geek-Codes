#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<bitset<10>(n)<<'\n';
	n=-(n);
	cout<<bitset<10>(n)<<'\n';
	cout<<n;
	return 0;
}
