#include<iostream>
#include<string>    
#include<vector>
#include<unordered_map>
#include<algorithm>   
using namespace std;
int main(){
	
		  int n;
		  cin>>n;
		  char arr[n+1];
		  unordered_map<char,bool> Map;
		  unordered_map<char,int> Qf;
		  cin>>arr;
		  for(int i=0;arr[i]!='\0';++i) 
		  	{
		  	Map[arr[i]]=true;
		  	Qf[arr[i]]=i;		  	
		    }
		 //for(int i=0; i<n; i++)  
		  int m;
		  cin>>m;
		  vector<string> str;
		  cin.ignore(100,'\n');
		  for(int i=0; i<m; i++)   
		  	{ 
			string str1;
		    getline(cin,str1);
		    str.push_back(str1);
		  	}
		  for(int i=0;i<m;++i)
		  	{
		  	int j=0;
		  	while(str[i][j])
		  		{
		  		if(Map[str[i][j]])
		  			{
		  			str[i][j]=arr[(Qf[str[i][j]]+1)%n];
				    }
				++j;
			    }
			//cout<<"str="<<str[i]<<'\n';
		    }
     	vector<string>::iterator it;
       for(it = str.begin(); it != str.end(); ++it)
      cout << *it << "\n";			      
					  	  
	 //system("pause");
	return 0;
}	 	  	      
