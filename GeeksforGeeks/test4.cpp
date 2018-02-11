#include<iostream>
#include<cmath>
using namespace std;
int main()
{

int n;
cin>>n;
cin.ignore(100,'\n');
string str;
getline(cin,str);
cout<<"str="<<str<<'\n';
getline(cin,str);
cout<<"str="<<str;
	return 0;
}
