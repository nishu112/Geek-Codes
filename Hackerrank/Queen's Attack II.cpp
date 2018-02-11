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
int n;
    int k;
    int coun=0;
map<pair<int,int> ,int>  my;
bool issafe(int i,int j)
{
   return (i>0 && j>0 && i<=n && j<=n);
}
void ul(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    ul(i+1,j-1);
}
void u(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    u(i+1,j);
}
void ur(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    ur(i+1,j+1);
}
void r(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    r(i,j+1);
}
void dr(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    dr(i-1,j+1);
}
void d(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    d(i-1,j);
}
void dl(int i,int j)
{
    if(!issafe(i,j) ||my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    dl(i-1,j-1);
}
void l(int i,int j)
{
    if(!issafe(i,j) || my.find(make_pair(i,j))!=my.end())   return;
    ++coun;
    l(i,j-1);
}
int count=0;
int main(){
    
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        my[make_pair(rObstacle,cObstacle)]=1;
    }
    ul(rQueen+1,cQueen-1);
    u(rQueen+1,cQueen);
    ur(rQueen+1,cQueen+1);
    r(rQueen,cQueen+1);
    dr(rQueen-1,cQueen+1);
    d(rQueen-1,cQueen);
    dl(rQueen-1,cQueen-1);
    l(rQueen,cQueen-1);
    cout<<coun;
    return 0;
}

