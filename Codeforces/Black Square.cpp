#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int a[4], i, count=0;
    string t;
    for(i=0; i<4; ++i)
        cin>>a[i];
    cin>>t;
    for(i=0; i<t.size(); ++i)
        count+=a[t[i]-'1'];
    cout << count <<endl;
    return 0;
}