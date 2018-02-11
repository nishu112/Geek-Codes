#include<iostream>
using namespace std;
int main()
{
char name[100];
int id2;
FILE * fp;
fp = fopen("test.txt", "r");
while(fscanf(fp, "%[^\n]\n",name) ==1) 
    printf("name: %s \n", name);

fclose(fp);

return 0;
}
