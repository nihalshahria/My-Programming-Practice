#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int a, b, a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	a=a1+a2+a3;
	b=b1+b2+b3;
	if (a%5==0)
	{
		a=a/5;
		/* code */
	}
	else
	{
		a=a/5+1;
	}
	if (b%10==0)
	{
		b=b/10;
		/* code */
	}
	else
	{
		b=b/10+1;
	}
	if (a+b<=n)
	{
		cout << "YES" << '\n';
		/* code */
	}
	else
		cout << "NO" << '\n';


	return 0;
}