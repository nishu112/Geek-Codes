#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define	     pf(x)			   printf("%d ",x)
#define	     pf2(x,y)		   printf("%d %d ",x,y)
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z)
#define 	 pfnl()			   putchar('\n');
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second
#define 	gc()				getchar()

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}

struct student
	{
	string name;
	int sch_id;
	int sem;
	string branch;
	student(string temp_name,int temp_sch_id,int temp_sem,string temp_branch):name(temp_name),
	sch_id(temp_sch_id),sem(temp_sem),branch(temp_branch)
		{
		}
	};
string temp_name,temp_branch;
int temp_sch_id,temp_sem;
void insert(vector<student> &details)
	{
	getline(cin,temp_name);
	cin>>temp_sch_id>>temp_sem;
	cin.ignore();
	getline(cin,temp_branch);
	details.push_back(student(temp_name,temp_sch_id,temp_sem,temp_branch));
	//out.close();
	}

int main() {
vector<student> details;
string temp_name,temp_branch;
int temp_sch_id,temp_sem;
ofstream out;
out.open("details.txt",std::fstream::app);
int ch;
while(1)
	{
	cout<<"\nEnter choice:\n";
	cin>>ch;
	switch(ch)
		{
		case 1:
			
			insert(details);
			cout<<"hey";
			break;
		case 2 :
			for(auto itr=details.begin();itr!=details.end();++itr)
			out<<itr->name<<"\n"<<itr-> sch_id<<" "<<itr->sem<<"\n"<<itr->branch<<"\n";
			details.clear();
			out.close();
			out.open("details.txt",std::fstream::app);
			break;
		case 3 :
			break;
		}
	}
out.close();
return 0;
}



