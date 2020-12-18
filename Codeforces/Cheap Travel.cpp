
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int n, m, a, b, x=0, y=0;
	cin>>n>>m>>a>>b;
	if (a*m<=b)
	{
		cout << n*a << '\n';

		/* code */
	}
	else
	{
		if(b<(n%m)*a)
            x=(((n/m)+1)*b);
		else
			x = (n/m)*b+ (n%m)*a;
		cout << x << '\n';

	}
	return 0;


}






