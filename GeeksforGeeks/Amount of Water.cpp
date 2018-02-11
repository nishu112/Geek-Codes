#include<iostream>
using namespace std;
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
    int i=0,s,e,sum=0,min,flag=0;
    while(i<n)
        {
        if(a[i]>a[i+1])
            {
            s=i;
            i++;
            e=-1;
            while(1)
                {
                while(a[i]<a[i+1] && i<n)
                    {
                    i++;
                    e=i;
                    flag=1;
                    //break;
                    }
                if(flag==1)
                	break;
                if(i-2>n )
                    {               	
					break;
					}
                i++;
                }
            cout<<s<<" "<<e<<"\n";
            if(e!=-1)
                {
                min=(a[s]>a[e])?a[e]:a[s];
                for(int j=s+1;j<e;j++)
                    {
                    if(min-a[j]>0)
                        sum+=min-a[j];
                    }
                //i--;
                }
            continue;
            }
        
            i++;
        }
    cout<<sum<<'\n';
    }

	return 0;
}
