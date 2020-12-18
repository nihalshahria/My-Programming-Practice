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

	long long int n, l;
	cin>>n>>l;
	double arr[n], max=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		
	}
	sort(arr, arr+n);
	

	//printf("%0.10f\n", max);

	for (int i = 0; i <n-1; ++i)
	{
		/* code */
		if((arr[i+1]-arr[i])/2>max)
			max = (arr[i+1]-arr[i])/2;
		//printf("%0.10f\n", max);

	}
	max = fmax(arr[0], max);
	max =fmax(max, l-arr[n-1]);

	printf("%0.9lf\n", max);

	return 0;
}