#include<stdio.h>
int main()
{
int i,A[3]={5,80,6};
  int s=A[0],b1=A[0],b2;

    for(i=0;i<3;i++)
       {
       	if(A[i]>b1)
       	  b1=A[i];
       	  if(A[i]<s)
       	    s=A[i];
       	}
       	    printf("%d %d\n",s,b1);
       	    b2=s;
       	for(i=0;i<3;i++)
       	{
       	    if(A[i]!=s && A[i]!=b1)
       	    	b2=A[i];
       	}
	   printf("%d",b2);
}
