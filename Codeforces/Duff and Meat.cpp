#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;
	int m[n], p[n], price=0, a,b;
	for (int i = 0; i < n; ++i)
	{
		cin>>m[i]>>p[i];
		if (i==0)
		{
			a=m[i];
			b=p[i];
			price= a*b;

			/* code */
		}
		else
		{
			if (p[i-1]<p[i])
			{
				p[i]=p[i-1];
				/* code */
			}
			a=m[i];
			b=p[i];
			price=price+a*b;
		}
		//cout << price << '\n';
		/* code */
	}
	cout << price << '\n';
	return 0;
}