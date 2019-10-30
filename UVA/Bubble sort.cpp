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
		long long int n, count;
		cin>>n;
		if (n*(n-1)%4==0)
		{
			cout << "Case "<<i+1<<": "<< n*(n-1)/4<< '\n';
			/* code */
		}
		else
		{
			cout << "Case "<<i+1<<": "<< n*(n-1)/2<<"/2"<< '\n';
			

		}
		/* code */
	}

	return 0;
}