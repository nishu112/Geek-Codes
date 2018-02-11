#include<iostream>
#include<string.h>
void swap(char *a,char *b)
	{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
	}
void permute(char arr[],int i,int n)
	{
	if(i==n-1)
		{
		std::cout<<arr<<" ";
		return ;
		}
	//std::cout<<"hey";
	for(int x=i;x<=n-1;++x)
		{
		//std::cout<<"hey";
		swap(&arr[i],&arr[x]);
		permute(arr,i+1,n);
		swap(&arr[i],&arr[x]);
		}
	}
int main()
{
	char str[100];
	std::cin>>str;
	
	permute(str,0,strlen(str));
	return 0;
}
