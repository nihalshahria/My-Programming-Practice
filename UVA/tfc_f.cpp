#include <bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--)
	{
		int n, a[1015], b[1015], p, q, red=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
			red = red+b[i];

		}
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (a[i]>a[j])
				{
					p=a[i];
					a[i]=a[j];
					a[j]=p;

					q=b[i];
					b[i]=b[j];
					b[j]=q;
				}
				if (a[i]==a[j])
				{
					if (b[i]<b[j])
					{
						q=b[j];
						b[j]=b[i];
						b[i]=q;
					}
				}
			}
		}
		int day=0;
		for (int i = 0; i < n; ++i)
		{
			if (day<a[i])
			{
				red = red-b[i];
				day++;
			}
			
		}
		if (red<0)
		{
			red=0;
		}
		cout << red << '\n';

	}

	return 0;
}