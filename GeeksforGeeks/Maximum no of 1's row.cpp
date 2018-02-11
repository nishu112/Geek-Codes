#include<iostream>
#include<limits.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int row,column;
    cin>>row>>column;
    int a[row][column];
    for(int i=0;i<row;i++)
        {
        for(int j=0;j<column;j++)
            {
            cin>>a[i][j];
            }
        }
    int max=-1,count,loc;
    for(int i=0;i<row;i++)
        {
        count=0;
        for(int j=0;j<column;j++)
            {
            if(a[i][j]==1)
                {
                count++;
                }
            }
        if(max<count)
        	{
        	max=count;
        	loc=i;
        	//cout<<" max="<<max<<" "<<i<<"\n";
			}
        }
    last: ;
    cout<<loc<<"\n";
    }

	return 0;
}
