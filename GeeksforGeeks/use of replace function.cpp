#include<iostream>
#include<string>
int main()
{
	std::string str="min(int, int)";
	std::string my(str);
	int n;
	std::cin>>n;
	n-=2;
	int count=0;
	while(n--)
		{
		str.replace(str.end()-4-count,str.end()-1-count,my);
		count++;
		}
	std::cout<<str;
	return 0;
}
