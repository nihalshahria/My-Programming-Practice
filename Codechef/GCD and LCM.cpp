#include <bits/stdc++.h>
using namespace std;

/*
int lcm(int a, int b)
{
	int m;
	for (int i = 1;; ++i)
	{
		m=a*i;
		if (m%b==0)
		{
			break;
		}

	}
	return m;
}
*/

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	long long int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long long int a, b, max, min;
		cin>>a>>b;
		if (a>b)
		{
			max = a;
			min = b;
		}
		else
		{
			max=b;
			min=a;
		}
		cout << __gcd(a,b) << " "<<a*b/(__gcd(a,b))<< '\n';
	}
	return 0;
}