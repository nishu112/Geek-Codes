#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include<stack>
using namespace std;

priority_queue<int> heap;
priority_queue<int> heap_remove;

void print()
	{
	while(!heap_remove.empty() && (heap.top()==heap_remove.top()))
		{
		heap.pop();
		heap_remove.pop();
		}
	cout<<heap.top()<<'\n';
	}

int main() { 
    int q,ch,num;
    cin>>q;
    while(q--)
    {
    cin>>ch;
    switch(ch){
        case 1: cin>>num; heap.push(-num); break;
        case 2: cin>>num; heap_remove.push(num); break;
        case 3: cout<<print()<<'\n';
        }        
    }
    return 0;
}

