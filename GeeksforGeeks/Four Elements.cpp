#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define	     pf(x)			   printf("%d ",x)
#define	     pf2(x,y)		   printf("%d %d ",x,y)
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z)
#define 	 pfnl()			   putchar('\n');
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

int binary_loc(int arr[],int n,int sum){
	int mid,l=0,r=n-1;
	while(l<=r){
		mid=(l+r)/2;
		if(arr[mid]<sum)	l=mid+1;
		else	r=mid-1;
	}
	return mid;
	
}

bool find_sum(int arr[],int n,int sum){
    unordered_set<int> mymap;
	rep(i,n-3){
		rep2(j,i+1,n-1){
		    mymap.clear();
			rep2(k,j+1,n){
				int temp=arr[i]+arr[j]+arr[k];
				if(mymap.find(-temp)!=mymap.end())	return 1;
				mymap.insert(arr[k]-sum);
			}
		}
	}
	
	return 0;
}

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int arr[105];
int t;
sc(t);
while(t--)
	{
	int n,sum;
	sc(n);
	rep(i,n)	sc(arr[i]);
	sc(sum);
	sort(arr,arr+n);//sorting is better than comparing in O(n^3)
	//debug(binary_loc(arr,n,sum));
	//we'll use binary_loc to find the upper bound upto which we have check in arrya
	//that means binary_loc returns the index of an array such that 
	//arr[binary_loc()] val is greater than sum or equal to sum
	// and we don't want to compare beyond sum value in array
	bool ans=find_sum(arr,binary_loc(arr,n,sum)+1,sum);
	cout<<ans;
	pfnl();
	}
return 0;
}


