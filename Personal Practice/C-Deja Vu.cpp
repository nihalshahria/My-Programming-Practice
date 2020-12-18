#include<bits/stdc++.h>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	long long int n, m, i;
	cin>>n>>m;
	long long int arr[n];
	
	for ( i = 0; i <=n; i++)
	{
		if(i==0 || i==1)
			arr[i]=1;
		else
		arr[i]=arr[i-1]+arr[i-2];
		/* code */
	}
	
	cout <<m%arr[n]<< '\n';
	return 0;
}