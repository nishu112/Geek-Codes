#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[101]={0};
    int num;
    for(int i=0;i<n;i++)
    	{
    	cin>>num;
    	a[num]++;
		}
	int max=0,count=0;
	for(int i=2;i<=100;i++)
		{
		count=a[i-1]+a[i];
		if(count>max)
			{
			max=count;
			}		
		}		
	cout<<max;
    return 0;
}
