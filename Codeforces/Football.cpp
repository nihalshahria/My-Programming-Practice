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
	
	int n, x=0, y=0, m;
	cin>>n;
	char s[15], t[n-1][15], p[15];
	cin>>s;
	x++;
	for (int i = 0; i < n-1; ++i)
	{
		cin>>t[i];
		if (strcmp(s,t[i])==0) x++;
		else
		{
			m=i;
			y++;
		}
	}
	if (x>y)
	{	
		cout << s << '\n';
	}
	else
		cout << t[m] << '\n';

	return 0;
}