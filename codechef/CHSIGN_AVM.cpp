#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long t ;
    scanf("%ld",&t) ;
    while (t--)
    {
        long long int n,i,j ;
        scanf("%lld",&n) ;
        long long int arr[n+1],ans[n+1],ms[n+1],brr[n+1],sum=0,c,k ;
        for (i=1;i<=n;i++)
            scanf("%lld",&arr[i]) ;
            
        ms[0]=0 ;
        ans[0]=0 ;
        
        for (i=1;i<=n;i++)
        {
            sum=0 ;
            ans[i]=10000000000000000 ;
            brr[i]=0 ;
            k=0 ;
            for (j=i-1;j>=0;j--)
            {
                c=ans[j]+sum+arr[i] ;
                if (ans[i]>c && c>0 && ms[j]+arr[j+1]>0)
                {
                    ans[i]=c ;
                    ms[i]=min(arr[i],ms[j]+sum+arr[i]) ;
                    brr[i]=j ;
                    //cout<<i<<" "<<j<<" "<<"+"<<endl ;
                }
                c=ans[j]+sum-arr[i] ;
                if (((ms[j]+arr[j+1]>0 && arr[i-1]>arr[i] && ms[j]+sum>arr[i]) || i==1) && (ans[i]>c && (c>0 || i==1)))
                {
                    ans[i]=c ;
                    ms[i]=0-arr[i] ;
                    brr[i]=j ;
                    //cout<<i<<" "<<j<<" "<<"-"<<endl ;
                    break ;
                }
                sum+=arr[j] ;
                k++ ;
                if (k>=100)
                    break ;
            }
        }
        /*for (i=1;i<=n;i++)
            cout<<arr[i]<<" " ;
        cout<<endl ;  
        for (i=1;i<=n;i++)
            cout<<ms[i]<<" " ;
        cout<<endl ;
        for (i=1;i<=n;i++)
            cout<<ans[i]<<" " ;
        cout<<endl ; 
        for (i=1;i<=n;i++)
            cout<<brr[i]<<" " ;
        cout<<endl ;*/  
        j=n ;
        while (j>=1)
        {
            if (ms[j]<0)
                arr[j]=arr[j]*-1 ;
            j=brr[j] ;    
        }
        for (i=1;i<=n;i++)
            printf("%lld ",arr[i]) ;
        printf("\n") ;    
    }
    return 0 ;
}  
