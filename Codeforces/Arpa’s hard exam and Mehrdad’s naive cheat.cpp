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
	
	long long int n;
	int m[]={6, 8, 4, 2};
	cin>>n;
	if (!n)
		cout << "1" << '\n';
 	else
 		cout << m[n%4] << '\n';
	return 0;
}