
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	long long int m;
	long double a,b, c, n, d;
	cin>>a>>b>>c;
	if(c==0)
	{
		if(a==b)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	else
	{
		n=((b-a)/c)+1;
		m = n;
			
		if((n==0 || n<0)||(a<0 && b>0 && c<0))
			cout << "NO" << '\n';
		else
		{
			d = a+(m-1)*c;
			
		if(d==b)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
		}
		
	}
	return 0;


}






