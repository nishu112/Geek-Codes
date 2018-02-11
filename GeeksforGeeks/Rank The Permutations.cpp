#include<iostream>
#include<algorithm>
//using namespace std;
int main()
{
int t;
std::cin>>t;
start:
while(t--)
    {
    std::string str;
    std::cin>>str;
    int a[26]={0};
    int i=0;
    while(str[i]!='\0')
    	{
    	if(str[i]<=90)
    		str[i]+=32;
    	a[str[i]-97]++;
    	i++;
		}
	for(int i=0;i<26;i++)
		{
		if(a[i]>1)
			{
			std::cout<<0<<'\n';
			goto start;
			}
		}
    std::string str1(str);
    std::sort(str.begin(),str.end());
    i=1;
    do
    {
    if(str==str1)
    	{
    	std::cout<<i<<'\n';
    	break;
		}
    i++;
    if(i>1000003)
    	i=i%1000003;
	}while(next_permutation(str.begin(),str.end())!=NULL);
    //std::cout<<str;
    }

	return 0;
}
