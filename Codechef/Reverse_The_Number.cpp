
#include<bits/stdc++.h>

using namespace std;

int main(){


    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int n, i;
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        int  x, m = 0, r = 0;
        scanf("%d", &x);
        for(;;){
        m = x % 10;
        r = r*10 + m;
        x = x/10;
        if(x%10==0 && x/10==0)
            break;
        //else

    }
    printf("%d\n", r);

    }


    



    return 0;


}






