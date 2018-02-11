#include<iostream>
int main()
	{
		int n;
		scanf("%d",&n);
		long double f=0,s=1,temp;
		if(n<=0)
			{
			printf("Incorrect number");
			return 0;
			}
		do
			{
			printf("%.0Lf ",f);
			temp=f+s;
			f=s;
			s=temp;
			}while(--n);
		return 0;
	}
