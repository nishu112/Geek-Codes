#include<iostream>
#include<string.h>
#include<algorithm> //for sort function
#define MAX_SIZE	1005

int main()
{
char str[2][MAX_SIZE]={"Geeksforgeeks","practice"};
int t=2;
int index=0;
while(index<t)
    {
    std::sort(str[index],str[index]+strlen(str[index])); //this function is from algorithm 
    printf("%s ",str[index]);
    ++index;
    }
	return 0;
}
