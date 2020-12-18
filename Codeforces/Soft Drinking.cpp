#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	long long int n, k,l,c,d,p,nl,np, x;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	l=k*l;
	c=c*d;
	l=l/nl;
	p=p/np;
	x=min(l,min(c,p));
	cout << x/n << '\n';



	return 0;
}