
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
		int j, p, x, sum = 0, count = 0;
		cin>>p;

		for (int j = 11; j>=0; --j)
		{
			x = pow(2,j);

			if(sum+x==p)
			{
				count++;
				break;
			}
			else if (p>x && j==11)
			{
				count = count+ (p/x);
				sum = (p/x)*x;

			}
			else if (sum+x<p)
			{
				sum = (sum+x);
				count = count+1;
			}
		}
		cout << count << '\n';

	}





	return 0;


}






