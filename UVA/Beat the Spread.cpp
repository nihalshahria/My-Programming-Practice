#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s, d;
		cin >> s >> d;
		int a, b;
		a = (s + d) / 2;
		b = s - a;
		if(s < d || abs(s - d) % 2 == 1) cout << "impossible\n";
		else cout << max(a,b) << " " <<min(a,b) << endl;
	}
	return 0;
}
