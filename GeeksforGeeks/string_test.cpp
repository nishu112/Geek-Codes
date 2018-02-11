#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	cin>>str;
	//bool val=next_permutation(str.begin(),str.end());
	//cout<<str<<endl;
	if(next_permutation(str.begin(),str.end()))
		cout<<str;
	else
		cout<<"no answer";
	return 0;
}
