#include <bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		int ar[n], min, s;
		for (int i = 0; i < n; ++i)
		{
			cin>>ar[i];
			
		}
		sort(ar, ar+n);

		cout << ar[0]+ar[1] << '\n';
		/* code */
	}

	return 0;
}