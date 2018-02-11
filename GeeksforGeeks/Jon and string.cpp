#include<iostream>
#include<map>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int i=0;
    map<char,int> vowels,consonants;
    map<char,int>::iterator vitr,citr;
    while(str[i]!='\0')
        {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        	++vowels[str[i]];
        else
        	++consonants[str[i]];
        ++i;
        }
    int flag=1;
    if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u')
    	flag=0;
    if(flag)
    	{
    	citr=consonants.begin();
    	cout<<citr->first;
    	--citr->second;
    	if(citr->second==0)
    		consonants.erase(citr);
    	}
    while(vowels.size() && consonants.size())
    	{
    	citr=consonants.begin(),vitr=vowels.begin();
    	cout<<vitr->first<<citr->first;
    	--citr->second;
    	--vitr->second;
    	if(citr->second==0)
    		consonants.erase(citr);
    	if(vitr->second==0)
    		vowels.erase(vitr);
		}
	while(vowels.size())
		{
		vitr=vowels.begin();
		cout<<vitr->first;
		--vitr->second;
		if(vitr->second==0)
    		vowels.erase(vitr);
		}
	while(consonants.size())
		{
		citr=consonants.begin();
		cout<<citr->first;
		--citr->second;
		if(citr->second==0)
    		consonants.erase(citr);
		}
	cout<<'\n';
    }
	return 0;
}
