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
	int p, q, num;
	cin>>p;
	std::vector<int> v;
	if (p!=0)
	{
		for (int i = 0; i < p; ++i)
	{
		cin>>num;
		v.push_back(num);
		/* code */
	}
		/* code */
	}
	
	cin>>q;
	if (q!=0)
	{
		for (int i = 0; i < q; ++i)
	{
		cin>>num;
		v.push_back(num);
		/* code */
	}

	}
	if (p==0 && q==0)
	{
		cout << "Oh, my keyboard!" << '\n';
		/* code */
	}
	else
	{
		sort(v.begin(), v.end());
	
	if (v[0]!=1 || v[v.size()-1]!=n)
	{
		cout << "Oh, my keyboard!" << '\n';
		/* code */
	}
	else
	{
		int f=0;
		for (int i = 0; i < v.size()-1; ++i)
		{
			if(v[i]==v[i+1] ||v[i]+1==v[i+1])
				continue;
			else
			{
				f=1;
				break;
			}
			
		}
		if (f==0)
		{
		cout << "I become the guy." << '\n';
			/* code */
		}
		else
			cout << "Oh, my keyboard!" << '\n';

	}
	}
	


	return 0;
}