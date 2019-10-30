
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	
	int t, i;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		/***	In a regular polygon, the size of each exterior angle = 360° ÷ number of sides   ***/
		if (360%(180-n)==0)
		{
			cout << "YES" << '\n';
		}
		else
			cout << "NO" << '\n';
	}

	



	return 0;


}






