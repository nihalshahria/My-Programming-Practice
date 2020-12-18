#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int arr[6]={0};
	int n, num, max=0, l=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>num;
		arr[num]++;
		if (arr[num]>max)
		{
			max=arr[num];
			l=num;
			/* code */
		}
		else if (arr[num]==max)
		{
			l=min(num, l);
			/* code */
		}

		/* code */
	}
	cout << l << '\n';


	return 0;
}