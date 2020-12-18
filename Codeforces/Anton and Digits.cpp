#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	long long int tw, th, fi, si, n;
	cin>>tw>>th>>fi>>si;
	n = 256*(min(min(tw, fi), si));
	tw= tw-(min(min(tw, fi), si));
	n=n+(min(th,tw))*32;
	cout << n << '\n';
	return 0;
}