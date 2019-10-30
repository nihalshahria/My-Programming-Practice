#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	string t;
	cin>>t;
	int count = 0;
	for (int i = 0; i < t.size(); ++i)
	{
		if (i==0)
		{
			if (abs('a'-t[i])>13)
			{
				count=26-abs('a'-t[i]);
				/* code */
			}
			else
				count=abs('a'-t[i]);
			/* code */
		}
		else
		{
			if (abs(t[i-1]-t[i])>13)
			{
				count=count+ 26-abs(t[i-1]-t[i]);
				/* code */
			}
			else
				count=count+abs(t[i-1]-t[i]);
		}
		/* code */
	}
	cout << count << '\n';

	return 0;
}