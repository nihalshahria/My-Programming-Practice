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

	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		char c;
		cin>>c;
		if (c=='b'||c=='B')
		{
			cout << "BattleShip" << '\n';
			/* code */
		}
		else if (c=='C'|| c=='c')
		{
			cout << "Cruiser" << '\n';
			/* code */
		}
		else if(c=='D'|| c=='d')
		/* code */
		{
			cout << "Destroyer" << '\n';
		}
		else
			cout << "Frigate" << '\n';
	}
	return 0;
}