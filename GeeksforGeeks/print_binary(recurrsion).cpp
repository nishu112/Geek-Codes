#include<iostream>
#include<vector>
std::vector<int> v;
void printbinary(int n,int i)
	{
	if(i==n)
		{
		for(std::vector<int> :: iterator itr=v.begin();itr!=v.end();++itr)
			std::cout<<*itr<<" ";
		std::cout<<'\n';
		return;
		}
	v.push_back(0);
	printbinary(n,i+1);
	v.pop_back();
	v.push_back(1);
	printbinary(n,i+1);
	v.pop_back();
	}
int main()
{
	int n;
	std::cin>>n;
	printbinary(n,0);
	return 0;
}
