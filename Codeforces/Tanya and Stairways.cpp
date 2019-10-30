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
	
	int n;
	cin>>n;
	int s[n], x=0; 
	std::vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
		if (n==1)
		{
			x++;
			v.push_back(s[0]);
		}
		else
		{
			if (i>0)
			{
				if (s[i]<=s[i-1])
				{	
					x++;
					v.push_back(s[i-1]);
				}
			}
			if (i==n-1)
			{
				x++;
				v.push_back(s[i]);
			}
		}
	}
	cout << x << '\n';
	for (int i = 0; i < x; ++i) cout << v[i] << " ";
	return 0;
}