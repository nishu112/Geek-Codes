#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
       cin >> c[c_i];
    }
    int temp=0,sum=0;
    for(int i=0;i<t-1;i++)
    	{
    	temp+=c[i];
    	if(n-temp<5)
    		{
    		sum+=temp;
    		temp=0;
			}
		}
	cout<<sum;
    return 0;
}
