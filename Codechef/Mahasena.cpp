
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	
	int t;
	cin>>t;
	int num, even = 0, odd = 0;
	for (int i = 0; i < t; ++i)
	{
		cin>>num;
		if (num%2==0)
		{
			even++;
			/* code */
		}
		else
			odd++;

		/* code */
	}
	if (even>odd)
	{
		cout <<  "READY FOR BATTLE" << '\n';
		/* code */
	}
	else
		cout << "NOT READY" << '\n';

	



	return 0;


}






