#include<bits/stdc++.h>
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
		int a, f;
		cin>>a>>f;
		for (int l = 1; l <=f; ++l)
		{
			for (int j = 1; j <=a; ++j)
		{
			for (int k = 1; k <=j; ++k)
			{
				cout << j;
			}
			cout <<'\n';
		}
		for (int j = a-1; j>=1; --j)
		{
			for (int k=j; k>=1; --k)
			{
				cout <<j;
			}

			cout <<'\n';
		}
		if (i==t-1 &&l==f)
		{
			continue;
		}
		else
			cout <<"\n";
		}
	}

	return 0;
}