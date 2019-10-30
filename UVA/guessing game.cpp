
#include<bits/stdc++.h>

using namespace std;

int main(){


	/*
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
*/

	int h = 0, l=0, avrg, x;
	char t[20], q[20];
	while(cin>>x && x!=0)
	{
		cin>>t;
		cin>>q;
		if(t[0]=='r')
		{
			avrg = (h+l)/2;
			if (avrg==x)
			{
				cout << "Stan may be honest" << '\n';
				h=0;
				l=0;
				avrg=0;
			}
			else if (h==0 && l==0)
			{
				/* code */
				cout << "Stan may be honest" << '\n';
				h=0;
				l=0;
				avg=0;
			else
			{
				cout << "Stan is dishonest" << '\n';
				h=0;
				l=0;
				avrg=0;
			}

		}
		else if (q[0]=='h')
		{
			if (x<h)
			{
				h = x;
			}
		}
		else if (q[0]=='l')
		{
			if (x>l)
			{
				l = x;
			}
		}

	}
	return 0;
}







