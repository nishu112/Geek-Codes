#include <bits/stdc++.h>
using namespace std;
struct score{
	int run;
	int wickets;
};
int main()
{
int n;
cin>>n;
if(!n)	return 0;
vector<score> Record;
score instance;
while(n--)
	{
	cin>>instance.run;
	cin>>instance.wickets;
	Record.push_back(instance);
	}
string Ans="YES\n";
if(Record[0].wickets>10 || Record[0].wickets<0 ||Record[0].run<0)	Ans="NO\n";
else
for(int i=1;i<Record.size();++i){
	
	if(Record[i].run<0 || Record[i].run<Record[i-1].run || Record[i].wickets<Record[i-1].wickets || Record[i-1].wickets==10 || Record[i].wickets<0){
		Ans="NO\n";
		break;
	}
}
cout<<Ans;
return 0;
}


