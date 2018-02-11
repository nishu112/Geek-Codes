#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int arr[1000001]={0};
for(int i=1;i<=1000000;++i)
   	{
   	int n=1,j=i;
   	while((n<<1)<=j)
   		{
   		n<<=1;
		}
	j=j-n;
	arr[i]+=j+1+arr[n-1]+arr[j];
	}
while(t--)
    {
    int num;
    cin>>num;
    
	cout<<arr[num]<<'\n';
    }
	return 0;
}
