#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int withdraw;
float balance;
cin>>withdraw;
cin>>balance;
if(withdraw%5==0 && withdraw+.5<=balance)
	balance-=withdraw+.5;
cout<<fixed;
cout<<setprecision(2);
cout<<balance;
	return 0;
}
