#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    int m;
    cin >> n >> m;
    int id[n+1];
    for(int i=1;i<=n;++i)
    	id[i]=i;
    for(int i=0;i<m;i++)
		{
		int p;
		int q;
		cin>>p>>q;
		if(id[p]!=id[q])
			{
			int num=id[p];
			for(int j=1;j<=n;++j)
				if(id[j]==num)
					id[j]=id[q];
			}
		}
	int a[100001]={0};
	int max_count=0;
	for(int i=1;i<=n;++i)
		{
		++a[id[i]];
		max_count=max(max_count,a[id[i]]);
		}
	cout<<max_count;
return 0;
}

