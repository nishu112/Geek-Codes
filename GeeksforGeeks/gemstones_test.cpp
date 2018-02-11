#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,i=0,count=0,j,n,co=0,k,flag,loc,p;
    scanf("%d",&t);
    char rock[t][100],len[t];
    n=t;
    for(i=0;i<t;i++)
    {
        scanf("%s",rock[i]);
        len[i]=strlen(rock[i])-1;
    }
     int a[256]={0};
     i=0,j=0;
	while(rock[0][i]!='\0')
		{
		if(a[rock[0][i]]==1)	
			{
			i++;	
			}
		else
			{
			a[rock[0][i]]=1;
			rock[0][j]=rock[0][i];
			i++;
			j++;
			}
		}
	rock[0][j]='\0';
     
    printf("string=%s\n",rock[0]);
    //printf("%s\n",rock[0]);
    //printf("len %d\n",strlen(rock[0]));

   for(k=0;k<strlen(rock[0])-1;k++)
    {
        flag=0;
         loc=0;
         for(p=t;p>1;p--)
         {
           //printf("t %d\n",t);
           if(t-1!=0)
           {
             flag=0;
             for(i=0;i<len[t-1];i++)
             {
                 if(rock[0][k]==rock[t-1][i]&&flag==0)
                 {
                        flag=1;
                        loc++;
                        //printf("compare done %d, loc %d\n",t-1,loc);
                        break;
                 }
            }
            if(flag==0)
                break;
          }
        }
        t--;
        if(flag==1)
            co++;
    }
    printf("%d",co);
    return 0;
}

