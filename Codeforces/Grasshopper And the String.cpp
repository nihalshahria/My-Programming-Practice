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
	
	string t;
	int x=0, y=0, m=0;
	cin>>t;
	for (int i = 0; i < t.size(); ++i)
	{
		int p;
		if (t[i]=='A'||t[i]=='E'||t[i]=='I'||t[i]=='O'||t[i]=='U'||t[i]=='Y')
		{
			p=i+1-x;
			x=i+1;
			m=max(p, m);
			//cout <<x<<" "<< p<<" "<<m << '\n';
		}
		if (i==t.size()-1)
		{
			p=t.size()+1-x;
			m=max(p,m);
			//cout <<x<<" "<< p<<" "<<m << '\n';
		}
	}
	cout << m << '\n';

	return 0;
}