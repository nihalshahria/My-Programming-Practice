#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, i , k, sum=0;
	cin>>n>>k;
	k=240-k;
	for ( i = 1; i <=n; ++i)
	 {
	 	//sum=sum+i*5;
	 	if (sum+i*5>k)
	 	{
	 		break;
	 		/* code */
	 	}
	 	sum=sum+i*5;
	 	/* code */
	 } 
	 cout << i-1 << '\n';

	return 0;
}