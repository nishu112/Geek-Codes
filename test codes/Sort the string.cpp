#include<stdio.h>
#define MAX_SIZE	1005

void remove_duplicate(char *str)
	{
	bool hash[256]={0}; //this is used for memotization 
    int i=0,j=0;
    while(str[i]!='\0')
        {
        if(!hash[str[i]]) //check if element is never present before in the string
            {
			str[j]=str[i];//copy the respective characters
			hash[str[i]]=1;// 1 means element is present before
			++j;
			}
        i++;
        }
    str[j]='\0';//put this chacter to end the string at jth character
	}
int main()
{
char str[2][MAX_SIZE]={"Geeksforgeeks","practice"};;
int t=2;
int index=0;
while(index<t)
    {
    remove_duplicate(str[index]);//index for the first string,second and so on
    printf("%s ",str[index]);
    ++index;
    }
	return 0;
}
