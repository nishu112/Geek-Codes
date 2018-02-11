#include<stdio.h>

int main()
{
int *iptr,num;
float *fptr = NULL;
char *cptr = NULL;
printf("\nSize of Integer Pointer   : %d Bytes",sizeof(num));
printf("\nSize of Integer Pointer   : %d Bytes",sizeof(iptr));
printf("\nSize of Character Pointer : %d Bytes",sizeof(cptr));
printf("\nSize of Float Pointer     : %d Bytes",sizeof(fptr));

return 0;
}
