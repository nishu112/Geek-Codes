#include<iostream>
using namespace std;
int main()
{
FILE *f1ptr,*f2ptr,*f3ptr;
f1ptr=fopen("1stfile.txt","r");
f3ptr=fopen("3rdfile.txt","w");
char ch;
int flag1=0;
while((ch=fgetc(f1ptr))!=EOF)
	{
	if(ch=='\t' && flag1==0)
		{
		fputc(' ',f3ptr);
		cout<<"yes";
		continue;
		}
	if(ch==',')
		fputc('\n',f3ptr);
	else
		{
		fputc(ch,f3ptr);
		flag1=1;
		}
	}
fclose(f1ptr);
fclose(f3ptr);
return 0;
}
