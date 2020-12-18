#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	int f=0;
	cin>>n;
	if (n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%444==0||n%477==0||n%744==0||n%747==0||n%777==0)
	{
		cout << "YES" << '\n';
		/* code */
	}
	else
		cout << "NO" << '\n';

	return 0;
}