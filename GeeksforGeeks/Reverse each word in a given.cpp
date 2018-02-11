#include<stdio.h>
#include<string.h>
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[2000];
        int i,j,l;
        scanf("%s",str);
        l=strlen(str);
        for(i=0;i<=l;i++)
        {
            if(str[i]=='.'||str[i]=='\0')
            {
                for(j=i-1;str[j]!='.'&&j>=0;j--)
                    printf("%c",str[j]);
                    if(i!=l)
                    printf(".");
            }
        }
        printf("\n");
	}
	return 0;
}
