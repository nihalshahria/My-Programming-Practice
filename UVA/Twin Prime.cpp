#include <bits/stdc++.h>

using namespace std;

int number[19000000]= {0};
int a[100015];

void prime()
{
    for (int i = 3; i <= 19000000; i++ )
        if ( number[i] == 0 )
            {
                cout<<i<<endl;
                for  (long long int j = 2;  i * j <= 19000000; j++ )
                number[i*j] = 1;
            }
}

void twin_prime()
{
    int x=1;
    for (int i = 3; i < 19000000; ++i)
        if(!number[i] && !number[i+2])
            a[x++]=i;
}
int main()

{
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    int n;
    prime();
    twin_prime();
    cout<<"nihal"<<endl;
    while(scanf("%d", &n)&&n!=0)
    {
        printf("(%d, %d)\n", a[n], a[n]+1);

    }
    return 0;
}

