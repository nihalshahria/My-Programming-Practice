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
	int arr[n], count=1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==arr[i+1])
		{
			count++;


			/* code */
		}
		/* code */
	}
	cout << count << '\n';
	return 0;
}