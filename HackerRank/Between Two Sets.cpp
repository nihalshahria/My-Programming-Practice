#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, m, count=0;
	cin>>n>>m;
	int ar1[n], ar2[m], l=0, g;
	for (int i = 0; i < n; ++i)
	{
		cin>>ar1[i];
		if (i==0)
		{
			l==ar1[i];
			/* code */
		}
		else
			l=  lcm (ar1[i], l);
		
		/* code */
	}
	cout << l << '\n';
	for (int i = 0; i < m; ++i)
	{
		cin>>ar2[i];
		if (i==0)
		{
			g=ar2[i];
			/* code */
		}
		else
			g=__gcd(g,ar2[i]);
		
		/* code */
	}
	cout << g << '\n';
	for (int i = l; i <=g; ++i)
	{
		int f=0;
		for (int j = 0; j < n; ++j)
		{
			if (i%ar1[j]!=0)
			{

				f=1;
				//cout <<ar1[j]<<' '<< i << '\n';
				break;
			}
			/* code */
		}
		if (f!=1)
		{
			for (int j = 0; j < m; ++j)
			{
				if (ar2[j]%i!=0)
				{
					f=1;
					//cout <<ar2[j]<<' '<< i << '\n';
					break;
					/* code */
				}
				/* code */
			}
			if (f!=1)
			{
				count++;
				/* code */
			}
			/* code */
		}
		/* code */
	}
	cout << count << '\n';
	return 0;
}