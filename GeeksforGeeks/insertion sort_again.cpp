//Nishant Bhardwaj

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort(int arr[],int n)
    {
    for(int i=1;i<n;i++)
        {//int i=1;
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp)
            {
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=temp;
        }
    }

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
            cin>>a[i];
    sort(a,n);
    cout<<"[";
    for(int i=0;i<n;i++)
        {
        cout<<a[i];
        if(i!=n-1)
            cout<<",";
        }
    cout<<"]";
    return 0;
}

