#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	double l, h, a;
	cin>>h>>l;
	a= (l*l-h*h)/(2*h);
	printf("%0.13lf\n", a);

	return 0;
}