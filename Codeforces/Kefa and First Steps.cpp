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

	int n;
	cin>>n;
	long long int arr[n], count = 1, m=1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if (i!=0)
		{
			if (arr[i]>=arr[i-1])
			{
				count++;
				if (count>=m)
				{
					m = count;
					/* code */
				}
				/* code */
			}
			else
			{
				if (count>=m)
				{
					m = count;
					/* code */
				}

				
				count=1;

			}
		}
	}
	cout << m << '\n';
	return 0;
}