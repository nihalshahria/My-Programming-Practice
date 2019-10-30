#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int m, n;
	cin>>n>>m;
	for (int i = 1;; ++i)
	{
		m--;
		n--;
		if (m==0 ||n==0)
		{
			if (i%2==1)
			{
				cout << "Akshat" << '\n';
				/* code */
			}
			else
				cout << "Malvika" << '\n';
			break;

			/* code */
		}
		/* code */
	}

	return 0;
}