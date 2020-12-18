#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	 int n;
	 cin>>n;
	 int p[n],q[n];
	 for (int i = 0; i < n; ++i)
	 {
	 	cin>> p[i]>>q[i];

	 	/* code */
	 }
	 for (int i = 0; i < n; ++i)
	 {
	 	if (p[i]!=q[i])
	 	{
	 		cout << "Happy Alex"<<endl;
	 		return 0;
	 		/* code */
	 	}
	 	/* code */
	 }

    
    cout << "Poor Alex"<<endl;
    

	return 0;
}