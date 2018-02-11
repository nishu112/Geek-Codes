#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> arr,int n,int i,int j)
	{
	int temp1=i,temp2=j;
	while(temp1>=0 && temp2>=0)
		{
		cout<<arr[temp1][temp2]<<" ";
		--temp1,--temp2;
		}
	if(i+1<n)
		print(arr,n,i+1,j);
	else if(j+1<n)
		print(arr,n,i,j+1);
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;++j)
    		cin>>a[i][j];
    print(a,n,0,0);
    cout<<'\n';
    }

	return 0;
}
