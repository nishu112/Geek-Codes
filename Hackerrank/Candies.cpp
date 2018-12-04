#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
vector<int> dp(n,1);
    //dp[0]=1;
    for(int i=1;i<n;++i){
        int k=i;
        if(arr[k]>arr[k-1]) dp[k]=1+dp[k-1];
        
        while(k>0 && arr[k-1]>arr[k] && dp[k-1]<=dp[k]){
            dp[k-1]+=1;
            --k;
        }
    }
    for(int i=0;i<n;++i){
        cout<<dp[i]<<" ";
    }
    return accumulate(dp.begin(),dp.end(),0);
    

}

int main()
{
 

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    cout << result << "\n";

    //fout.close();

    return 0;
}

