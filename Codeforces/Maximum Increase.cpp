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
	
	long long int n, j=1, m=1;
	cin>>n;
	long long int a[n];
	for (long long int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (i>0)
		{	
			if (a[i-1]<a[i])		
			{	
				j++;
				m=max(m, j);
				//cout << j<<" "<<m << '\n';
			}
			else
				j=1;
		}
	}
	cout << m << '\n';
	return 0;
}