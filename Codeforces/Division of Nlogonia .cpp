#include<bits/stdc++.h>
using namespace std;
int main()
{


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int n, i;
    while(cin>>n && n!=0)
    {
        int c1, c2;
        cin>>c1>>c2;
        for(i = 1;i<=n;i++)
        {
            int a, b;

            cin>>a>>b;
            if(c1==a || c2==b)
                cout<<"divisa"<<endl;
            else if(a>c1 && b>c2)
                cout<<"NE"<<endl;
            else if(a>c1 && b<c2)
                cout<<"SE"<<endl;
            else if(a<c1 && b>c2)
                cout<<"NO"<<endl;
                else if(a<c1 && b<c2)
                cout<<"SO"<<endl;
        }
    }
    return 0;
}