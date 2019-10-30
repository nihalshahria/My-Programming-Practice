
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	long long int n, one =0, zero = 0;
	cin>>n;
	string t;
	cin>>t;
	for (int i = 0; i < t.size(); ++i)
	{
		if (t[i]=='0')
		{
			zero++;
			/* code */
		}
		else
			one++;
		/* code */
	}
	cout << abs(zero-one) << '\n';

	



	return 0;


}






