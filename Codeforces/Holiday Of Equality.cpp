#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	long long int n, sum = 0;
	cin>>n;
	int arr[n], m=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if (m<arr[i])
		{
			m = arr[i];
			/* code */
		}
	}
	for (int i = 0; i < n; ++i)
	{
		sum = sum+ (m-arr[i]);
		/* code */
	}
	cout << sum << '\n';

	return 0;
}