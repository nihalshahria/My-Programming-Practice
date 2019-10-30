#include <bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n,x,c=0;
	cin>>n>>x;
	for(int i=0;i<n;i++)
		if(x%(i+1)==0&&x/(i+1)<=n)
			c++;
	cout<<c<<endl;
	return 0;
}