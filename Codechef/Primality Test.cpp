
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long long r, f=0;
		cin>>r;
		if(r<2)
           cout << "no" << '\n';
        else if (r==2)
        { 
           cout << "yes" << '\n';
            }
        else
        {
            long long int j, f=0;
            for (int j = 2; j <=sqrt(r); ++j)
            {
                if(r%j==0)
                {
                    f=1;
                    break;
                }
            }
            if (f==0)
            {
            	cout << "yes" << '\n';
            }
            else
            	cout << "no" << '\n';
        }

		/* code */
	}

	



	return 0;


}






