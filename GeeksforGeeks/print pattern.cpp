#include<iostream>
void add(int val,int n)
	{
	if(val>n)
		return;
	std::cout<<val<<" ";
	add(val+5,n);
	}
void sub(int val,int n)
	{
	if(val<=0)
		{
		add(val,n);
		return ;
		}
	std::cout<<val<<" ";
	sub(val-5,n);
	}
int main()
{
int t;
std::cin>>t;
while(t--)
    {
    int n;
    std::cin>>n;
    sub(n,n);
    std::cout<<'\n';
	}
	return 0;
}
