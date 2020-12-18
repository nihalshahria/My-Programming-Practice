#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n, p, x, y, count=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>p;
		if (i==0)
		{
			x=p;
			y=p;
		}
		else
		{
			if (x<p)
			{
				x=p;
				count++;
				/* code */
			}
			if (y>p)
			{
				y=p;
				count++;
				/* code */
			}
		}
		/* code */
	}
	cout << count << '\n';


	return 0;
}