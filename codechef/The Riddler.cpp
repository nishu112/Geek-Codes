#include <bits/stdc++.h>
using namespace std;
int A,B,M;
int main() {
int T;
scanf("%d",&T);
while(T--)
	{
	scanf("%d %d %d",&A,&B,&M);
	int val=(B/M-ceil(1.0*A/M)+1);
	printf("%d\n",val);
	}
return 0;
}



