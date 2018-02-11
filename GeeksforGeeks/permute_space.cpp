#include<iostream>
#include<string.h>
using namespace std;
void permute(char str[],int n,int i,int arr[])
	{
	if(i==n-1)
		{
		std::cout<<"(";
		for(int x=0;x<=n-2;x++)
			{
			std::cout<<str[x];
			if(arr[x]==1)
				std::cout<<" ";
			}
		std::cout<<str[n-1]<<")";
		return ;
		}
	arr[i]=1;
	permute(str,n,i+1,arr);
	arr[i]=0;
	permute(str,n,i+1,arr);
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    char str[12];
    cin>>str;
    //cout<<"str="<<str;
    int arr[strlen(str)+1];
    permute(str,strlen(str),0,arr);
    //cout<<"hey";
    cout<<'\n';
    }

	return 0;
}
