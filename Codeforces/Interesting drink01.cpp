#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;
	int sp[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>sp[i];
		/* code */
	}
	sort(sp, sp+n);
	int q;
	cin>>q;
	int pr[q], ans[q];
	for (int i = 0; i < q; ++i)
	{
		cin>>pr[i];
		ans[i]=upper_bound(sp, sp+n, pr[i])-sp;
		/* code */
	}
	for (int i = 0; i < q; ++i)
	{
		cout << ans[i] << '\n';
		/* code */
	}

	return 0;
}