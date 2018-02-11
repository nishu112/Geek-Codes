#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int x,y;
    //cout<<"sqrt="<<(-1+(int)(sqrt(1+4*n)))<<'\n';
    x=(-1+(int)(sqrt(1+8*n)))/2;
    y=(-1-(int)(sqrt(1+8*n)))/2;
    //cout<<"x= "<<x<<" "<<y<<"\n";
    if((x*(x+1))/2==n || (y*(y+1))/2==n)
        {
    	cout<<"1\n";
        continue;
    	}
    cout<<"0\n";
    }
	return 0;
}
