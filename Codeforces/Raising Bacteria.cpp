
#include<bits/stdc++.h>

using namespace std;

int main(){


	/*
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	*/


	long long int i, n, c=0, m=0, sum = 0;
	cin>>n;
	for (int i = 1;; ++i)
	{
		if (n==0)
		{
			/* code */
			break;
		}
		if (n%2!=0)
		{
			/* code */
			c++;
			n--;

		}
		else
		{
			n = n/2;
		}
	}
	cout << c << '\n';





	return 0;


}






