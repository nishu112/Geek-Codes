#include<iostream>
void print(int n)
	{
	if(n==0 || n==1)
		{
		std::cout<<n;
		return ;
		}
	print(n>>1);
	std::cout<<(n&1);
	}
int main()
{
	int n;
	std::cin>>n;
	print(n);
	return 0;
}
