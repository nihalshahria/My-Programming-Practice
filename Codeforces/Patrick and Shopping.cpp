#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int a,b,c,min=0, s;
	cin>>a>>b>>c;
	min=a+b+c;
	if (min>2*a+2*b)
	{
		min=2*a+2*b;

		/* code */
	}
	if (min>2*a+2*c)
	{
		min =2*a+2*c; 
		/* code */
	}
	if (min>2*b+2*c)
	{
		min=2*b+2*c;
		/* code */
	}
	cout << min << '\n';

	return 0;
}