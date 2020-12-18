
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int t, i, n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>t;
		if (t<10)
		{
			cout << "What an obedient servant you are!" << '\n';
		}
		else
			cout << "-1" << '\n';
	}

	return 0;


}






