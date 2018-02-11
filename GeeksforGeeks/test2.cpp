#include<stdio.h>
int num()
{
	return 1,5,7;
}
int main()
{
float b;
b=15/2;
printf("b=%f\n",b);
b=static_cast<float>(15/2)+(15/2);
printf("new b=%f",b);
return 0;
}
