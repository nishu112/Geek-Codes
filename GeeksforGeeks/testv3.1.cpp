#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr = (int *)malloc(sizeof(int)*2);
   int i;    
   ptr[0]=10;
   ptr[1]=20;
   ptr = (int *)realloc(ptr, sizeof(int)*1);
   ptr[2] = 30;
   for(i = 0; i < 1; i++)
       printf("%d ", *(ptr + i));
   return 0;
}
