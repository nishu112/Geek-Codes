#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define M(x) (x%MOD + MOD)%MOD
#define _pb push_back
#define _mp make_pair
#define ff first
#define ss second
 
ll mul(ll x,ll y)
{ ll ans=1;
 
  while(y>0)
  { if(y&1)
	ans=(ans*x)%MOD;
	y/=2;
	x=(x*x)%MOD;
  }
  
  return ans;
};
 
/**********************************************/
char a[4][1000];
 
int main()
{ ll t;
  cin>>t;
  
  while(t--)
  { ll n,i,j;
    cin>>n;
    
    for(i=1;i<=2;i++)
  	for(j=1;j<=n;j++)
  	cin>>a[i][j];
  	
  	/*for(i=1;i<=2;i++)
  	{ for(j=1;j<=n;j++)
  	  cout<<a[i][j];
  	  cout<<"\n";
  	}*/
  	
	ll last[2],in,fin=1;
	
	//cout<<n<<"\n";
	
	for(i=1;i<=n;i++)
	if(a[1][i]!='.' || a[2][i]!='.')
	{ if(a[1][i]=='#')
	  last[1]=1;
	  else
	  last[1]=0;	
	  
	  if(a[2][i]=='#')
	  last[2]=1;
	  else
	  last[2]=0;
	  
	  in=i;
	  break;
    }
    else
    continue;
	
	//cout<<n<<"\n";
	//cout<<last[1]<<" "<<last[2]<<" "<<in<<" "<<n<<"\n";
	
	for(i=in+1;i<=n;i++)
	{ //cout<<i<<" "<<a[1][i]<<"--"<<a[2][i]<<"\n";
	  if(a[1][i]=='.' && a[2][i]=='.')
	  { last[1]=last[2]=0;
	  }
	  else if(a[1][i]=='.' && a[2][i]=='#')
	  { if(last[2]==0)
	  	{ fin=0;
	  	  //cout<<"cool\n";
	  	  break;	
		}
		else
		last[1]=0,last[2]=1; 
	  }
	  else if(a[1][i]=='#' && a[2][i]=='#')
	  { if(last[1]==0 && last[2]==0)
	  	{ fin=0;
	  	  break;	
		}
		else if(last[1]==0 && last[2]==1)
	  	{ last[1]=1;
	  	  last[2]=0;
		}
		else if(last[1]==1 && last[2]==0)
	  	{ last[1]=0;
	  	  last[2]=1;
		}
		else
		{ last[1]=1;
		  last[2]=1;	
		}
	  }
	  else if(a[1][i]=='#' && a[2][i]=='.')	
	  { if(last[1]==0)
	  	{ fin=0;
	  	  break;	
		}
		else
		{ last[1]=1;
		  last[2]=0;	
		}
	  }
	  
	}
	
	if(fin==1)
	cout<<"yes\n";
	else
	cout<<"no\n";  
   
   }
   return 0;
} 
