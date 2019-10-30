#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	string t;
	cin>>t;
	int arr[t.size()], w=0;
	arr[0]=0;
	for (int i = 1; i < t.size(); ++i)
	{
		/* code */
		if (t[i]==t[i-1])
		{
			w++;
			/* code */
		}
		arr[i]=w;

	}
	int m;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int l, r;
		cin>>l>>r;
		cout << arr[r-1]-arr[l-1] << '\n';
	}

	return 0;
}