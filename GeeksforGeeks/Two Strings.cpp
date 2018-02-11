#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int t;
scanf("%d\n",&t);
while(t--)    
    {
    char a[100001],b[100001];
	int i,j;
    int flag=0;
    scanf("%s",a);
    scanf("%s",b);
    //fflush(stdin);
    //printf("%s\n",a);
   // printf("%s %d \n",b,t);
    int c[26]={0},d[26]={0};
    while(a[i]!='\0')
        {
        c[a[i]-97]++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
        {
        d[b[i]-97]++;
        i++;
    }
    for(i=0;i<26;i++)
        {
       if(c[i]>0 && d[i]>0)
           {
           flag=1;
           break;
       }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
return 0;
}

