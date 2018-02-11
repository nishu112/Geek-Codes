#include<iostream>
void printbinary(int n)
	{
	if(n==0 || n==1)
		{
		std::cout<<n;
		return;
		}
	printbinary(n/2);
	std::cout<<n%2;
	}
int main()
{
	int n;
	std::cin>>n;
	printbinary(n);
	return 0;
}
