#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	
	string t, s;
	cin>>t;
	int f=0;
	getchar();
	getline(cin, s);
	//cout << s << '\n';
	for (int i = 0; i < s.size(); ++i)
	{
		if (t[0]==s[i] || t[1]==s[i])
		{
			f=1;
			break;

			/* code */
		}
		/* code */
	}
	if (f==1)
	{
		cout << "YES" << '\n';
		/* code */
	}
	else
		cout << "NO" << '\n';

	return 0;
}