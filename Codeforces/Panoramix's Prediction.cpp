#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, i, j, m;
	cin>>n>>m;
	int f=0;
	for (i = n+1;i<=m; ++i)
	{
		f=0;
		for ( j = 2; j<=sqrt(i); ++j)
		{
			if (i%j==0)
			{
				f=1;
				break;
				/* code */
			}
			/* code */
		}
		if (f==0)
		{
			break;
		}
	}
	if (f==0)
	{
		if (i==m)
			{
				cout << "YES" << '\n';
				/* code */
			}
		else
			cout << "NO" << '\n';
			
		/* code */
	}
	else
				cout << "NO" << '\n';
			/* code */
			

	return 0;
}