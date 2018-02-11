#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    int n,num;
    map<int,int> m;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&num);
        m.insert(make_pair(num,i));
    }
    for(auto itr=m.begin();itr!=m.end();++itr)
    {
        printf("%d \n",m[itr->second]);
    }
        
    return 0;
}

