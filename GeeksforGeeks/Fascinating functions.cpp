#include <iostream>
#include <limits>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int q;
    cin>>q;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string str;
    getline(cin, str);
    char ch;
    int n1,n2,flag=0;
    int arr[26]={0};
    int i=0,sum;
    while(str[i]!='\0')
        {
        arr[str[i]-65]++;
        i++;
        }
    for(i=0;i<26;i++)
    	if(arr[i]!=0)
    		cout<<arr[i]<<" ";
    	cout<<"\n";
    while(q--)
        {
        cin>>n1>>n2;
        //flag=0;
        if(n1==1)
            {
            cin>>ch;
            arr[str[n2-1]-65]--;
            str[n2-1]=ch;
            arr[ch-65]++;
            //flag=1;
            }
        else
            {
            sum=0;
            for(int i=0;i<26;i++)
                {
                if(arr[i]!=0)
                    {
                    sum+=arr[i];
                    }
                if(sum>=n2)
                    {
                    ch=i+65;
                    break;
                    }
                }
            
            //sort(temp.begin(),temp.end());
                
            cout<<ch<<'\n';
            }
        }
        
    return 0;
}

