#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    int min=s[0],max=s[0];
    vector<int> v(2);
    v[0]=0,v[1]=0;
    for(vector<int> ::iterator itr=s.begin();itr!=s.end();++itr)
        {
        if(min>*itr)
            min=*itr,++v[1];
        else if(max<*itr)
            max=*itr,++v[0];
        }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}

