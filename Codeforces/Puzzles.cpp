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

	int n, m, x=0;
	cin>>n>>m;
	int arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
	}
	sort(arr, arr+m);
	for (int i = 0; i <=m-n; ++i)
	{
		if (i==0)
		{

			x=arr[i+n-1]-arr[i];
		}
		else
		{
			if (x>=arr[i+n-1]-arr[i])
			{
				x=arr[i+n-1]-arr[i];/* code */
			}
		}
		/* code */
	}
	cout << x << '\n';
	return 0;
}