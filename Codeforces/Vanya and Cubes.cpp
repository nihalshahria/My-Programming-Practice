
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int n, sum=0, i, c=0, m=0;
	cin>>n;
	for (int i = 1;; ++i)
	{
		/* code */
		m = m+i;
		sum= sum+m;
		if(sum>n)
			break;
		else if(sum==n)
		{
			c++;
			break;
        }
        c++;


	}
	cout << c << '\n';

	



	return 0;


}






