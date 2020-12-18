#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, m, c=0;
	cin>>n>>m;
	while(1)
	{
		int a=max(n,m), b=min(m,n);
		if (b==0|| (m==1 &&n==1))
		{
			break;
			/* code */
		}
		if (a==n)
		{
			n=n-2;
			m=m-1;
			c++;

			/* code */
		}
		else
		{
			m=m-2;
			n=n-1;
			c++;
		}

	}
	cout << c << '\n';

	return 0;
}