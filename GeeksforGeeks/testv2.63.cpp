#include<iostream>
int main()
{
	int n;
	std::cin>>n;
	std::cout<<__builtin_popcount(n)<<'\n';
	return 0;
}
