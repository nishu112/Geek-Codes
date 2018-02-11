#include<iostream>
#include<vector>
using namespace std;
string str[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void permute(int arr[],int i,int n,string mystr)
	{
	if(i==n)
		{
		cout<<mystr<<" ";
		return ;
		}
	for(int j=0;str[arr[i]][j]!='\0';++j)
		permute(arr,i+1,n,mystr+str[arr[i]][j]);
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
		cin>>a[i];
    permute(a,0,n,"");
    cout<<'\n';
    }

	return 0;
}
