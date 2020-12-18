#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	string s, t;
	getline(cin, s);
	int p;
	cin>>p;
	getchar();
	cin>>t;
	int n=t.size();
	for (int i = s.size()-1, k=0; i>=p-1; --i, k++)
	{
		int j= s.size()-1+n+j;
		s[j]=s[i];
		/* code */
	}
	for (int i = p-1, j=0; j<n; ++i,j++ )
	{
		/* code */
		s[i]=t[j];
	}
	cout << s << '\n';

	return 0;
}