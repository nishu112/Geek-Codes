#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str,mystr,min_str;
    cin>>str;
    min_str=mystr=str;
    int l=str.length()-1;
    sort(min_str.begin(),min_str.end());
    int flag=0;
    do
    	{
    	//cout<<"string is"<<min_str<<" "<<mystr<<" "<<str<<'\n';
		if(mystr>str && (mystr[l]&1)==0)
			{
			//cout<<mystr;
			break;
			}
						
		}while(next_permutation(mystr.begin(),mystr.end()));
	//cout<<"string is"<<min_str<<" "<<mystr<<" "<<str<<'\n';
	if(mystr==min_str)
    		{
    		flag=1;
    		//cout<<"heeey";
    		//break;
			}
    if(flag)
    	cout<<-1;
	else
		cout<<mystr;
	cout<<'\n';
    }

	return 0;
}
