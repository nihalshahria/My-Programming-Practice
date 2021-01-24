#include<bits/stdc++.h>
using namespace std;
void Z_func(string &str, string &pat){
	string tot = pat + "$" + str;
	int n = tot.size(), l = 0, r = 0;
	std::vector<int> z(n,0);
	for (int i = 1; i < n; ++i){
		if(i<=r)z[i] = min(r - i + 1, z[i-l]);
		while(i+z[i] < n && tot[z[i]] == tot[i+z[i]]) z[i]++;
		if(i + z[i] - 1 > r)l = i, r = i + z[i] - 1;
	}
	int l1 = pat.size();
	for (int i = l1+1; i < n-l1+1; ++i){
		if(z[i]==l1)printf("\n%d found\n", i-(l1+1));
	}
}
int main(int argc, char const *argv[])
{
	string str, pat;
	cin>>str>>pat;
	Z_func(str,pat);
	return 0;
}