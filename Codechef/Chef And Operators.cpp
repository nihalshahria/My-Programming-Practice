
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long long int a, b;
		cin>>a>>b;
		if (a>b)
		{
			/* code */
			cout << ">" << '\n';
		}
		else if (a<b)
		{
			cout << "<" << '\n';
			/* code */
		}
		else
			cout << "=" << '\n';
		/* code */
	}

	



	return 0;


}






