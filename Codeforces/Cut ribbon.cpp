#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int l, a, b, c, count=1, s;
	cin>>l>>a>>b>>c;
	for (int i = 0; i <= l; ++i)
		for (int j = 0; j <= l; ++j)
		{
			s=l-(a*i+b*j);
			if (s>=0 && s%c==0)
			{
				s=s/c;
				count = max(count, s+i+j);
				//cout << count << '\n';
			}
		}
	cout << count << '\n';
	return 0;
}		