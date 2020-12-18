#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, c, h=0;
    cin>>a>>b;
    for(i = 1;;i++)
    {
        if(a==0)break;
        a--;
        if(i%b==0)a++;
        h++;
    }
    cout<<h<<endl;

    return 0;
}



