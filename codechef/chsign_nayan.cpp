#include <bits/stdc++.h>
#include<stdio.h>
 
using namespace std;
long int change(int a[],int i,int n)
{
    
    if(i==n-1)
    {
        
         if(a[i]<a[i-1])
 {
     //cout<<"hello"<<a[i]<<" "<<a[2]<<" "<<a[4]<<" ";
     if(i==1||a[i-2]>0||abs(a[i-2])+a[i]<a[i-1])
     {
         a[i]=a[i]*-1;
         //cout<<a[i]<<" ";
         return a[i];
     }
     else
     {
         if(a[i]>abs(a[i-2]))
         {
         a[i-2]=a[i-2]*-1;
     a[i]=a[i]*-1;
         
         }
         
         return a[i];
     }
 
    }
    else
    return a[i];
    
    }
 else if(a[i]<a[i-1]&&a[i]<a[i+1])
 {
     if(i==1||a[i-2]>0||((abs(a[i-2])+a[i])<a[i-1]))
     {
         a[i]=a[i]*-1;
         return change(a,i+1,n)+a[i];
     }
     else
     {
         //cout<<"hello"<<a[i-2];
          if(i==n-2||a[i+2]>a[i+1]||((i!=(n-3))&&(a[i+2]>a[i+3]))||(abs(a[i])+abs(a[i+2])<abs(a[i+1])))
          {
              if(abs(a[i])>abs(a[i-2]))
          {
              a[i-2]=a[i-2]*-1;
     a[i]=a[i]*-1;
          }
          return change(a,i+1,n)+a[i];
              
          }
          else
          {
           int b[n];
         for(int j=0;j<n;j++)
         b[j]=a[j];
          long int sum1=change(a,i+1,n)+a[i]+a[i-2];
         
         //for(int j=i-2;j<n;j++)
         //{
          //   sum1=sum1+a[j];
         //}
         b[i-2]=b[i-2]*-1;
         b[i]=b[i]*-1;
         long int sum2=change(b,i+1,n)+b[i]+b[i-2];
         
         //for(int j=i-2;j<n;j++)
         //{
           //  sum2=sum2+b[j];
         //}
     
         if(sum2<sum1)
         {
             for(int j=i-2;j<n;j++)
         a[j]=b[j];
         
         sum1=sum2;
             
         }
         
     return (sum1-a[i-2]);
          }
     }
     
     
     
     
     
 }
 else
 return change(a,i+1,n)+a[i];
}
 
 
int main() {
int t;
scanf("%d",&t);
while(t--)
{
     int n;
    scanf("%d",&n);
     int a[n];
   int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(a[0]<a[1])
    {a[0]=a[0]*(-1);
    //printf("hi");
    }
 
    change(a,1,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
     printf("\n");
    
    
}
    
} 
