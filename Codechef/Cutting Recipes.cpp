
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int t;
	int l;
	cin>>t;
	for (int l = 0; l < t; ++l)
	{
		int n, m=0, f=0;
		cin>>n;
		int ar1[n], ar2[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>ar1[i];

			if (m<ar1[i])
			{
				m = ar1[i];
				/* code */
			}
			//cout << m << '\n';
			/* code */
		}
		int i, j, p;
		for (int i = m; i >1; --i)
		{
			
			
			for (int j = 0; j < n; j++)
			{
				if (ar1[j]%i==0)
				{
					f++;
				}
				else
					{
						
						f=0;
						break;
					}

			}
			if (f==n)
			{
				p = i;
				break;
			}
			
		
		}
		

		/* code */
	
	if (f==n)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << ar1[j]/p<< " ";
			/* code */
		}

		/* code */
	}
	else
		for (int j = 0; j < n; ++j)
		{
			cout << ar1[j] << " ";
			/* code */
		}
	cout << '\n';



	


}
return 0;
}






