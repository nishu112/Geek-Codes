#include<iostream>
#include<bitset>
#include<string>

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
	int n;
	std::cin>>n;
	std::cout<<std::bitset<10>(n).to_string()<<'\n';
	}
	return 0;
}
