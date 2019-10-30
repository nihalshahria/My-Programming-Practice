#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, m;
	cin>>n>>m;
	for (int i = 1; i <= n; ++i)
	{
		if(i%2==1)
		{
			for (int i = 0; i < m; ++i)
			{
				cout <<"#";
				/* code */
			}
			cout <<'\n';
		}
		else
		{
			if ((i/2)%2==1)
			{
				for (int i = 0; i < m-1; ++i)
			{
				cout << ".";
				/* code */
			}
			cout << "#" << '\n';
				/* code */
			}
			else
			{
							cout << "#";
				for (int i = 0; i < m-1; ++i)
			{
				cout << ".";
				/* code */
			}
			cout<<"\n";

			}
			
		}
		/* code */
	}

	return 0;
}