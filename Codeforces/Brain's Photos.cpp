
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int m, f = 0, n, i;
	cin>>n>>m;
	for (int i = 0; i < m*n; ++i)
	{
		char c;
		cin>>c;
		if(c=='C' || c=='M'|| c=='Y')
			f=1;
	}
	if (f==1)
	{
		cout << "#Color" << '\n';
	}

	else
		cout << "#Black&White" << '\n';
	return 0;
}