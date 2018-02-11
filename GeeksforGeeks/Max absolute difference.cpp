#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int currsum=0,maxsum=0,loc_s=0,loc_e=0,flag=0;
    for(int i=0;i<n;i++)
    	{
    	currsum+=a[i];
    	if(currsum<0)
    		{
			currsum=0;
			flag=0;
			}
    	if(maxsum<currsum)
    		{
    		if(flag==0)
    			{
    			flag=1;
    			loc_s=loc_e=i;
				}
			else
				{
				loc_e=i;
				}
			maxsum=currsum;
			}
		}
	cout<<"maxsum="<<maxsum<<'\n';
	int minsum=0;
	currsum=0;
	for(int i=0;i<loc_s;i++)
    	{
    	currsum+=a[i];
    	if(currsum>0)
    		currsum=0;
    	if(minsum>currsum)
    		{
			minsum=currsum;
			}
		}
	cout<<"minsum1="<<minsum<<'\n';
	int minsum2=0;
	currsum=0;
	for(int i=loc_e;i<n;i++)
    	{
    	currsum+=a[i];
    	if(currsum>0)
    		currsum=0;
    	if(minsum2>currsum)
    		{
			minsum2=currsum;
			}
		}
	cout<<"minsum2="<<minsum2<<'\n';
	minsum=minsum<minsum2 ? minsum :minsum2;
	int final=maxsum-minsum;
	cout<<"final of max="<<maxsum-minsum<<'\n';
currsum=0,maxsum=0,loc_s=0,loc_e=0,flag=0;
    for(int i=0;i<n;i++)
    	{
    	currsum+=a[i];
    	if(currsum>0)
    		{
			currsum=0;
			flag=0;
			}
    	if(maxsum>currsum)
    		{
    		if(flag==0)
    			{
    			flag=1;
    			loc_s=loc_e=i;
				}
			else
				{
				loc_e=i;
				}
			maxsum=currsum;
			}
		}
	cout<<"minsum="<<maxsum<<'\n';
	minsum=0;
	currsum=0;
	for(int i=0;i<loc_s;i++)
    	{
    	currsum+=a[i];
    	if(currsum<0)
    		currsum=0;
    	if(minsum<currsum)
    		{
			minsum=currsum;
			}
		}
	cout<<"maxsum1="<<minsum<<'\n';
	minsum2=0;
	currsum=0;
	for(int i=loc_e;i<n;i++)
    	{
    	currsum+=a[i];
    	if(currsum<0)
    		currsum=0;
    	if(minsum2<currsum)
    		{
			minsum2=currsum;
			}
		}
	cout<<"maxsum2="<<minsum2<<'\n';
	minsum=minsum>minsum2 ? minsum :minsum2;
	cout<<"final of max="<<minsum-maxsum<<'\n';
	final=final>minsum-maxsum ? final :minsum-maxsum;
	cout<<final<<'\n';
    }

	return 0;
}
