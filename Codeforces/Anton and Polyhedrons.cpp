
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int n, i, m=0;
	cin>>n;
	char t[n][20];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>t[i];
		if(t[i][0]=='T')
		{
			m+=4;

		}
		else if(t[i][0]=='C')
		{
			m+=6;
			
		}
		if(t[i][0]=='O')
		{
			m+=8;
		}
		if(t[i][0]=='D')
		{
			m+=12;
		}
		if(t[i][0]=='I')
		{
			m+=20;
		}
	}
	cout << m << '\n';
	return 0;
}






