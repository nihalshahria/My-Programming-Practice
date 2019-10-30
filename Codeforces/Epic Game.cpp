
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int a, b, n, i, f;
	cin>>a>>b>>n;
	for (int i = 1;; ++i)
	{
		/* code */
		if(i%2!=0)
		{
			if (n-__gcd(a,n)>=0)
			{
				n = n-__gcd(a,n);
				f=1;
			}
			else
				break;
		}
		else
		{
			if (n-__gcd(b,n)>=0)
			{
				n = n-__gcd(b,n);
				f=0;
			}
			else
				break;
		}
	}
	if (f==1)
	{		
		cout << "0" << '\n';
	}
	else
		cout << "1" << '\n';
	return 0;
}