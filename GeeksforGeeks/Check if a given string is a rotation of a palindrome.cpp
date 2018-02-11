#include<iostream>
using namespace std;
int find(string str,int n)
    {
    int k=n,flag=0;
    while(k>0)
        {
        int i=0,j=n-1;
        flag=0;
        while(i<j)
            {
            if(str[(n-k%n+i)%n]!=str[(n-k%n+j)%n])
                {
                flag=1;
                break;
                }
            i++;
            j--;
            }
        if(flag==0)
            return 1;
        k--;
        }
    if(flag==1)
        return 0;
    return 1;
    }
int main()
 {
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    if(find(str,str.length()))
        {
        cout<<"1\n";
        }
    else
        {
        cout<<"0\n";
        }
    }
	return 0;
}
