#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	

	int s, n;
	cin>>s>>n;
	int ar1[n], ar2[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>ar1[i]>>ar2[i];
		/* code */
	}
	int p, q;
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (ar1[i]>ar1[j])
			{
				p=ar1[i];
				ar1[i]=ar1[j];
				ar1[j]=p;
				q=ar2[i];
				ar2[i]=ar2[j];
				ar2[j]=q;
				/* code */
			}
			/* code */
		}
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		if (s>ar1[i])
		{
			s=s+ar2[i];
			/* code */
		}
		else
		{
			cout << "NO" << '\n';
			return 0;
		}
		/* code */
	}
	cout << "YES" << '\n';


	return 0;
}