#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={4,8,-34,12,-566,-3,65645};
	int n=7;
	int loc=0,temp;
	sort(a,a+n);
	for(int i=0;i<n;++i)
		printf("%d ",a[i]);
}
