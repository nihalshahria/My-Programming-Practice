/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |	   |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________| 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;
	long long int gh[n];
	for (int i = 0; i < n; ++i) cin>>gh[i];
	int q;
	cin>>q;
	long long int bh[q];
	for (int i = 0; i < q; ++i)
	{
		cin>>bh[i];
		int ts = lower_bound(gh, gh+n, bh[i])-gh-1;
		int st = upper_bound(gh, gh+n, bh[i])-gh;
		if (ts>=0 && st<n && st>=0 && ts<n)
			cout << gh[ts]<<" "<< gh[st] << '\n';
		else if (ts<0 && st<n)
			cout << "X "<< gh[st]  << '\n';
		else if (ts>=0 && st>=n)
			cout << gh[ts]<<" X" << '\n';
		else
			cout << "X X" << '\n';
	}
	return 0;
}