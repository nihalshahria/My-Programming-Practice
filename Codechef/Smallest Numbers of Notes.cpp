
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int t, i;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n, count=0;
		cin>>n;
		if(n>=100)
		{
			count = n/100;
			n = n%100;
		}
		if (n>=50)
		{		
			count = count + 1;
			n = n%50;
		}
		if(n>=10)
		{
			count = count+ (n/10);
			n = n%10;
		}
		if(n>=5)
		{
			count = count + 1;
			n = n%5;
		}
		if(n>=2)
		{
			count = count+ (n/2);
			n = n%2;
		}
		if(n>=1)
		{
			count = count+ 1;
		}
		cout << count << '\n';
	}

	



	return 0;


}






