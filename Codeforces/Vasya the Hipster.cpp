
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int a, b, min, max;
	cin>>a>>b;
	if (a>b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	cout << min << " ";
	max = max-min;
	max = max/2;
	cout << max << '\n';
	return 0;


}






