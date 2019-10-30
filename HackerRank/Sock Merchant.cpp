#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;
	int s[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
		/* code */
	}
	sort(s, s+n);
	int c=0, p=0;
	for (int i = 0; i < n-1; ++i)
	{
		if (s[i]==s[i+1])
		{
			c++;
			i++;
			/* code */
		}

		/* code */
	}
	cout << c << '\n';

	return 0;
}