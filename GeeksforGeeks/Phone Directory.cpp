#include <bits/stdc++.h>

using namespace std;

struct Trie{
    struct Trie* children[26];
    bool isEnd;
};

Trie *getNode(){
    Trie *newNode=new Trie;
    newNode->isEnd=false;
    for(int i=0;i<26;++i)   newNode->children[i]=nullptr;
    return  newNode;
}

void insert(Trie *root,string str){
    Trie *pCrawl=root;
    for(int i=0;i<str.length() ;++i){
        if(!pCrawl->children[str[i]-'a']){
            Trie *node=getNode();
            pCrawl->children[str[i]-'a']=node;
        }
        pCrawl=pCrawl->children[str[i]-'a'];
    }
    pCrawl->isEnd=true;
}

void search(Trie *pCrawl,string matched,string curr,vector<string> &Res){

    if(pCrawl->isEnd==true){
        Res.push_back(matched+curr);
    }
    
    for(int i=0;i<26;++i){
        if(pCrawl->children[i]!=nullptr){
        	char ch=i+'a';
            search(pCrawl->children[i],matched,curr+ch,Res);
        }
    }
    
}

void solve(){
    int n;
    cin>>n;
    string str;
    Trie *root=getNode();
    while(n--){
        cin>>str;
        insert(root,str);
    }
    string query;
    cin>>query;
    for(int j=1;j<=query.length();++j){
    string matched="";
    Trie *pCrawl=root;
    for(int i=0;i<j && pCrawl!=nullptr;++i )
    {
    pCrawl=pCrawl->children[query[i]-'a'];
    matched+=query[i];
    }
    vector<string > Res;
    string curr="";
    bool stringExist=0;
   
    if(pCrawl)
    search(pCrawl,matched,curr,Res);
    if(Res.size()==0)   cout<<"0";
    for(auto itr=Res.begin();itr!=Res.end();++itr){
        cout<<*itr<<" ";
    }
    cout<<"\n";
	}
}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
	{
	solve();
	

	}
return 0;
}
