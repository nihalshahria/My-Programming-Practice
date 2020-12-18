
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int n, k;
	cin>>n>>k;
	int i, x, count=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>x;
		if(x+k<=5)
			count++;
	}
	cout << count/3 << '\n';


	



	return 0;


}






