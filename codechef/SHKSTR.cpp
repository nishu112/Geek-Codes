#include <bits/stdc++.h>

using namespace std;

struct Trie{
	struct Trie* Children[26];
	int minIndex;
	int endIndex;
	bool isEnd;
};

Trie *getNode(){
	Trie *newNode =new Trie;
	newNode->isEnd=0;
	newNode->minIndex=INT_MAX;
	newNode->endIndex=INT_MAX;
	for(int i=0;i<26;++i)	newNode->Children[i]=nullptr;
	return newNode;
}

void insert(Trie *root,string str,int index){
	Trie *pCrawl=root;
	//cout<<str<<" index="<<index<<"\n";
	for(int i=0;i<str.length();++i){
		if(pCrawl->Children[str[i]-'a']==nullptr){
			Trie *node=getNode();
			//cout<<"created new\n";
			pCrawl->Children[str[i]-'a']=node;
		}
		pCrawl->minIndex=min(pCrawl->minIndex,index);
		pCrawl=pCrawl->Children[str[i]-'a'];		
		//cout<<"No\n";
	}
	pCrawl->isEnd=1;
	pCrawl->minIndex=min(pCrawl->minIndex,index);
	pCrawl->endIndex=min(pCrawl->endIndex,index);
}


void search(int &r,Trie *root,string &matched,string curr,string &res){
	if(root==nullptr || res!="")	return ;
	if(root->isEnd==1 && root->endIndex<=r){
		res=matched+curr;
		return;
	}
	for(int i=0;i<26;++i){
		if(root->Children[i] && root->minIndex<=r){
			char ch=i+'a';
			search(r,root->Children[i],matched,curr+ch,res);
		}
	}
}

void getPatternMatch(int r,string query,Trie *root){
	Trie *pCrawl=root;
	string matched="";
	string res="";
	//cout<<query;
	
	for(int i=0;i<query.length() && pCrawl->Children[query[i]-'a']!=nullptr &&  pCrawl->Children[query[i]-'a']->minIndex<=r ;++i){
 
		//else	cout<<"Np\n";
		pCrawl=pCrawl->Children[query[i]-'a'];
		matched+=query[i];
		//cout<<"Nope\n";
	}
	

	//cout<<"will search remaining\n";
	string curr="";
	search(r,pCrawl,matched,curr,res);
	cout<<res<<"\n";
}

int main(){
	int n;
	cin>>n;
	string str;
	Trie *root=getNode();
	for (int i=1;i<=n;++i){
		cin>>str;
		insert(root,str,i);
	}
	int q;
	int r;
	cin.ignore();
	cin>>q;
	string query;
	while(q--){
		cin >> r >> query ;
		//cout<<r<< " " << query <<" \n";
		getPatternMatch(r,query,root);
	}
	
}
