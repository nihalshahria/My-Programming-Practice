
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	
	//int num1, num2;
	
	string t,r;
	cin>>t;
	cin>>r;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	 {
	 	/* code */
	 	sum = sum +min(abs(t[i]-r[i]), 10-abs(t[i]-r[i]));
	 } 
	 cout << sum << '\n';
	
	
	return 0;


}






