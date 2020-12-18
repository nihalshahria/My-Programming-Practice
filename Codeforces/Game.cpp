#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, k1, k2;
    cin>>n1>>n2>>k1>>k2;
    while(1)
    {
        if(n1-1>=0)
            n1--;
        else
        {
            cout<<"Second\n";
            return 0;
        }
        if(n2-1>=0)
            n2--;
        else
        {
            cout<<"First\n";
            return 0;
        }

    }
}
