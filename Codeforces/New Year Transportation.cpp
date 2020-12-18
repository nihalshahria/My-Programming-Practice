#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, t, f=0;
	cin>>n>>t;
	int arr[n];
	for (int i = 1; i < n; ++i)
	{
		cin>>arr[i];

		/* code */
	}
	for (int i = 1;; i=i+arr[i])
	{

		if (t==i)
		{
			f=1;
			break;
		}
			
		else
		{
			if (t<i)
			{
				f=0;
				/* code */
				break;
			}



		}
		/* code */
	}
	if (f==1)
	{
		cout << "YES" << '\n';
		/* code */
	}
	else
		cout << "NO" << '\n';


	return 0;
}