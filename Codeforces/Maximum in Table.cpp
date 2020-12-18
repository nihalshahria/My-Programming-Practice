#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n, i, j;
	cin>>n;
	int arr[n][n];
	for(i = 0; i<n;i++)
		for (int j = 0; j < n; ++j)
		{
			if(i==0 || j==0)
				arr[i][j] = 1;
			else
			{
				arr[i][j] = arr[i-1][j]+arr[i][j-1];
			}
		}
	cout << arr[n-1][n-1] << '\n';
	return 0;


}






