#include<iostream>
#include<bitset>
using namespace std;
main()
{
    int a=14;
    cout<<bitset<32>(a).to_string()<<'\n';
    a=-a;
    cout<<bitset<32>(a).to_string();
    printf("\n%d",a);
	//getch();
}
