#include<iostream>
using namespace std;
int main()
{
	FILE *fptr;
	char str[100];
	cin.getline(str,100);
	//getchar();
	fptr=fopen("project.txt","w+");
	//int n;
	//cin>>n;
	int roll;
	cin>>roll;
	int count=1;
	fprintf(fptr,"%d %d %s",count,roll,str);
	fclose(fptr);
	cout<<"\ndata is written in file..";
	FILE *ptr;
	ptr=fopen("project.txt","r+");
	char str1[100];
	int froll,count1;
	fscanf(ptr,"%d %d %[^\n]s",&count1,&froll,str1);
	cout<<"\nNew data is\n";
	printf("%d %d %s",count1,froll,str1);
	fclose(ptr);
	return 0;
}
