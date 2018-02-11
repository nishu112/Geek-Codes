#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int bsearch(vector<int> v,int l,int r,int data)
	{
	int mid;
	if(l<=r)
		{
		mid=(l+r)/2;
		if(data==v[mid])
			{
			return mid;
			}
		else if(v[mid]>data)
			return bsearch(v,l,mid-1,data);
		else
			return bsearch(v,mid+1,r,data);
		}
	return -l-1;
	}
int main(){
    int n,num;
    cin >> n;
    vector<int> score;
    cin>>num;
    score.push_back(num);
    int j=1;
    for(int i=1;i<n;i++)
    	{
    	cin>>num;
    	if(score[j-1]!=num)
    		{
			score.push_back(num);	
			j++;
			}
		}
	reverse(score.begin(),score.end());
	int m;
	cin>>m;
	vector<int> alice;
	int res=0;
	for(int i=0;i<m;i++)
		{
		cin>>num;
		res=bsearch(score,res,j-1,num);
		if(res>=0)
			cout<<j-res<<'\n';
		else
			{
			cout<<(j+res+2)<<'\n';
			res=-res-1;
			if(res<0)
				res=0;		
			}
		}
    return 0;
}
