
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int t;
	getchar();
	while(cin>>t && t!=-1)
	{
		string p, q, r, s;
		char c;
		int i, j=0, k, l;
		cin>>p;
		sort(p.begin(), p.end());
		q[0]=p[0];
		j++;
		for (int i = 1; i < p.size(); ++i)
		{
			/* code */
			if(p[i]!=p[i-1])
			{
				q[j]=p[i];
				j++;
			}
		}
		cin>>r;
		sort(r.begin(), r.end());
		if (r.size()< q.size())
		{
			/* code */
			cout << "Round"<<t << '\n'<<"You chickened out.\n";
		}
		else
		{
			int s=0,w=0, f=1;
		for (int i = 0; i < r.size(); ++i)
		{
			for(j=0; j<q.size();j++)
			{
				if (r[i]==q[j])
				{
					/* code */
					q[j]=0;
					s++;
					if (s==q.size())
					{
						/* code */f=2;
						break;
					}
					if (q[j]!=q[j+1])
					{
						/* code */break;
					}

				}


			}
			if (f==2)
			{
				break;
				/* code */
			}
			/* code */
		}
		}	
		
	}
	return 0;
}