
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int n;
	cin>>n;
	int arr[n], i, count = 1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if (i!=0)
		{
			
			if((arr[i]==10 && arr[i-1]==1)||(arr[i]==1 && arr[i-1]==10))
				count++;
		}
	}
	cout << count << '\n';
	return 0;
}






