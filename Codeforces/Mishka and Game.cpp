
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int i, n, x, y, p=0, q=0;
	cin>>n;
	
	for(i = 0;i<n;i++)
	{
		cin>>x>>y;
		if(x>y)p++;
		if(y>x)q++;

	}
	if(p>q)cout<<"Mishka"<<endl;
	else if(p<q)cout << "Chris" << '\n';
	else cout << "Friendship is magic!^^" << '\n';
	return 0;
}






