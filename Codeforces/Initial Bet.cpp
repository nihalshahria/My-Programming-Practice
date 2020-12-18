#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int a,b,c,d,e,sum;
	cin>>a>>b>>c>>d>>e;
	sum=a+b+c+d+e;
	if (sum%5==0 &&sum>0)
	{
		cout << sum/5 << '\n';
		/* code */
	}
	else
		cout << "-1" << '\n';

	return 0;
}