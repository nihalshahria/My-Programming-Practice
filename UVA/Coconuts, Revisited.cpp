/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |	   |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________| 
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	while(cin>>n && n>=0)
	{
		int c=-1;
		for (int i = sqrt(n)+1; i>=2; --i)
		{
			int t=n, f=1;
			for (int j = 0; j<i; ++j)
			{
				if (t%i!=1)
				{
					f=0;
					break;
				}
				t=t-t/i;
				t--;
			}
			if (f==1)
			{
				if (t%i==0)
				{
					c=i;
					break;
				}
			}
		}
		if (c==-1)
			cout<< n <<" coconuts, "<<"no solution"<<endl;
		else
			cout << n <<" coconuts, "<< c <<" people and 1 monkey" << '\n';
	}
	return 0;
}