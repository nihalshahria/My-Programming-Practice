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

	char str[225];
	cin>>str;
	for (int i = 0; i < strlen(str); ++i)
	{
		if (str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
		{
			cout <<" ";
			i = i+2;
			/* code */
		}
		else
			cout << str[i];
		/* code */
	}
	return 0;
}