
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int i, a, b, n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a>>b;
	if (a>b)
	{
		/* code */
		cout << a << " "<<a+b<<endl;
	}
	else
	{
		cout << b << " "<<a+b<<endl;
	}
	}
	


	



	return 0;


}






