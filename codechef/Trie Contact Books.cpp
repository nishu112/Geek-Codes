#include <bits/stdc++.h>

using namespace std;
struct Trie{
	Trie  *Jump[256];
	bool isend;
	Trie(){
		for(int i=0;i<256;++i)	Jump[i]=nullptr;
		isend=false;
	}
};

void insertIntoTrie(string str,Trie *root,int i){
	if(i==str.length()){
		root->isend=true;
		return;
	}
	if(root->Jump[str[i]]==nullptr){
	Trie *newNode=new Trie;
	root->Jump[str[i]]=newNode;
	//root=newNode;
	}
	insertIntoTrie(str,root->Jump[str[i]],i+1);	
}

void prefixSearchInTrie(Trie *root,int i,string match,string matched){
	if(!root)	return;
	if(isend){
		cout<<matched<<" ";
		//return;
	}
	if(i>=match.length())
	{
	for(int j=0;j<256;++j)		if(Jump[i])	prefixSearchTrie(Jump[i],i+1,match,matched+(char)i);
	return;
	}
	
	prefixSearchInTrie(root->Jump[match[i]],i+1,match,matched+match[i]);
	
}
int main()
{
int t;
cin>>t;
while(t--)
	{
	Trie *head=new Trie;
	int n;
	string str;
	cin>>n;
	while(n--){
		cin>>str;
		insertIntoTrie(str,head,0);
	}
	}
return 0;
}


