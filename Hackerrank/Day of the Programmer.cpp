#include <iostream>
using namespace std;

bool isleap_julian(int n)
	{
	return (n%400==0);
	}

bool isleap_gregorian(int n)
	{
	return ((n%400==0) || ( n%100!=0 && n%4==0));
	}

int main() {
int day=13,month=9,year;
cin>>year;
if(year<1918)  day+=-isleap_julian(year);
else if(year==1918)	day+=13-isleap_gregorian(year);
else	day+=-isleap_gregorian(year);
printf("%d.0%d.%d",day,month,year);
return 0;
}

