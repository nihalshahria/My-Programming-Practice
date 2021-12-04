#include<bits/stdc++.h>
using namespace std;

class Trie{
	Trie* chars[26]{};
	bool endPoint = false;
public:
	void insert(string& s){
		auto cur = this;
		for(int i = 0; i<s.size(); i++){
			if(!cur->chars[s[i] - 'a'])
				cur->chars[s[i] - 'a'] = new Trie();
			cur = cur->chars[s[i] - 'a'];
		}
		cur->endPoint = true;
	}
	bool search(string &s){
		auto cur = this;
		for(int i = 0; i<s.size(); i++){
			if(!cur->chars[s[i] - 'a'])
				return false;
			cur = cur->chars[s[i] - 'a'];
			// if(cur->endPoint)return true;
		}
		return cur->endPoint;
	}
};

int main(int argc, char const *argv[])
{
	int n;
	Trie tr;
	while(cin>>n){
		if(n){
			int m;
			cin>>m;
			while(m--){
				string str;
				cin>>str;
				tr.insert(str);
			}
		}else{
			string str;
			cin>>str;
			cout<<tr.search(str)<<"\n";
		}
	}
	return 0;
}