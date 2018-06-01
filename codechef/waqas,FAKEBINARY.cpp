#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
int n,q;
cin>>n>>q;
int arr[n+1],mix[n+1]={0};
for(int i=1; i<=n; i++)
  cin>>arr[i];
   
   //finding how many elements are greater than the current element
  for(int i=1; i<=n; i++)
     for(int j=1; j<=n; j++){
     	if(arr[i]<arr[j])
     	  mix[i]++;
     }
     //for(int i=1; i<=n; i++)
   // for(int j=1; j<=n; j++)
     //	cout<<mix[j]<<" ";
     //	cout<<endl;
     
  while(q--){
  	int low,high,mid,temp,swap=0,value,index,flag=0;
 cin>>value;
 //cout<<"@@"<<value<<endl;
   for(int i=1; i<n+1; i++){
     if(arr[i]==value){
       index=i;
       break;
     }
   }
   //cout<<mix[7];
   low=1;high=n;
   while(low<=high){
   	mid=(low+high)/2;
 
		
			   		if(arr[mid]==value){
			   			flag=1;
			   			break;
			   		}
			   	else if(arr[mid]>value && index<mid)
			   	         high=mid-1;
			   	 else if(arr[mid]<value && index>mid)
			   	         low=mid+1;
			   	         
			   	   else if(arr[mid]>value && index>mid){
			   	   	    if((n-mix[index]-1-swap)>0){
			   	         swap++;
			   	         low=mid+1;
			   	         if(index<(low+high)/2){
			   	         	temp=arr[mid];
			   	         	arr[mid]=arr[(low+high)/2];
			   	         	arr[(low+high)/2]=temp;
			   	         }
			   	   	    }
			   	   	    else break;
			   	   }
			   else if(arr[mid]<value && index<mid){
			   	         if((mix[index]-swap)>0){
			   	         swap++;
			   	         high=mid-1;
			   	   	    }
			   	   	    if(index>(low+high)/2){
			   	         	temp=arr[mid];
			   	         	arr[mid]=arr[(low+high)/2];
			   	         	arr[(low+high)/2]=temp;
			   	         }
			   	   	    else break;
			   	   }
			   	
	//cout<<"1..."<<sum_motu<<" "<<sum_tomu<<endl;
	
    }
    
    
    if(flag)
    cout<<swap<<endl;
    else
      cout<<"-1"<<endl;
		   }
	
	}
	return 0;
}
