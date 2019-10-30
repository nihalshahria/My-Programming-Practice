#include<bits/stdc++.h>
using namespace std;


int main(){



	long long int n, i;
	while(1)
	{
		cin>>n;
		std::vector<int> v;
		if (n==0)
		{
			return 0;
			/* code */
		}
		if (n==1)
		{
			cout << n << '\n';
			return 0;
			/* code */
		}

		for (i = 1; i <=n; ++i)
		{
			v.push_back(i);
			//cout << ar1[i] << " ";
			/* code */
		}
		/*for (int i = 0; i < n; ++i)
		{
			cout << v[i] << ' ';

		}
		*/
		//cout <<'\n';
		long long int j=0;
		//cout <<'\n';
		for (i = 0;; ++i)
		{
			if ((i+1)%2==0)
			{
				v.push_back(v[i]);
				j++;
				//cout << v[v.size()-1]<<" "<<j << '\n';
				if (j==n-1)
				{
					break;
				}

				/* code */
			}

		}

		cout << v[i] << '\n';
	}


	return 0;
}
