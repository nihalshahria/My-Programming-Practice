#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	long long int n, m, count=0, p=1;
	cin>>n>>m;
	long long arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
		if (p>arr[i])
		{
			count= count + (n-p+arr[i]);
			p = arr[i];
			/* code */
		}
		else if (p<arr[i])
		{
			count = count+ arr[i]-p;
			p=arr[i];
		}
	
	}
	cout << count << '\n';

	return 0;
}