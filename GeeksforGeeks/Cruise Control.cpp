#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t;
cin>>t;
cout<<fixed;
cout<<setprecision(6);
FILE *fptr;
fptr=fopen("my.txt","w");
for(int i=1;i<=t;++i)
	{
	fprintf(fptr,"Case #%d: ",i);
	unsigned int d,n;
	scanf("%d%d",&d,&n);
	double temp,n1,n2,max=0;
	for(int j=0;j<n;++j)
		{
		double k,s;
		scanf("%f%f",&k,&s);
		temp=(d-k)/s;
		if(temp>max)
			{
			max=temp;
			n1=k;
			n2=s;
			}
		}	
	double val=(d*n2)/(d-n1);
	fprintf(fptr,"%lf\n",val);
	}
	fclose(fptr);
	return 0;
}
