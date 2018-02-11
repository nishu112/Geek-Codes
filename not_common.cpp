#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define		 pf(x)			   printf("%d\n",x);
#define 	 pf2(x,y)		   printf("%d %d\n",x,y);
#define		 pf3(x,y,z)		   printf("%d %d %d\n",x,y,z);
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define wl(n) while (n--)
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define all(v) v.begin(),v.end()
const double eps=0.000000000000001 ;
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
		continue;
		}
	if(ch==',')
		fputc('\n',f3ptr);
	else
		fputc(ch,f3ptr);
	flag1=1;
	}
fclose(f1ptr);
fclose(f3ptr);

f1ptr=fopen("1stfile.txt","w");
f3ptr=fopen("3rdfile.txt","r");
while((ch=fgetc(f3ptr))!=EOF)
	{
	fputc(ch,f1ptr);
	}
fclose(f1ptr);
fclose(f3ptr);

f2ptr=fopen("2ndfile.txt","r");
f3ptr=fopen("3rdfile.txt","w");
flag1=0;
while((ch=fgetc(f2ptr))!=EOF)
	{
	if(ch=='\t' && flag1==0)
		{
		fputc(' ',f3ptr);
		continue;
		}
	if(ch==',')
		fputc('\n',f3ptr);
	else
		fputc(ch,f3ptr);
	flag1=1;
	}
fclose(f2ptr);
fclose(f3ptr);

f2ptr=fopen("2ndfile.txt","w");
f3ptr=fopen("3rdfile.txt","r");
while((ch=fgetc(f3ptr))!=EOF)
	{
	fputc(ch,f2ptr);
	}
fclose(f2ptr);
fclose(f3ptr);
f1ptr=fopen("1stfile.txt","r");
f2ptr=fopen("2ndfile.txt","r");
f3ptr=fopen("3rdfile.txt","w");
char arr1[100],arr2[100];
unordered_set<string> uset;
while(fgets(arr2,100, f2ptr))	
	{
	uset.insert(arr2);
	}
int flag;
//each(itr,uset) cout<<*itr<<'\n';
while(fgets(arr1,100,f1ptr))
	{
	if(uset.find(arr1)==uset.end()) fprintf(f3ptr,"%s\n",arr1);
	}
fclose(f1ptr);
fclose(f2ptr);
fclose(f3ptr);
return 0;
}
