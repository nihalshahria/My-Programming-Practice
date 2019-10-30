#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)//side parallel to y axis
    {
        int y = abs(y1-y2);
        printf("%d %d %d %d\n", x2+y, y2, x1+y, y1);
    }
    else if(y1==y2)//side parallel to x axis
    {
        int x = abs(x1-x2);
        printf("%d %d %d %d\n", x2, y2+x, x1, y1+x);
    }
    else{
        if(abs(x1-x2)!= abs(y1-y2)) cout<< "-1" <<endl;
        else{
            int x = abs(x1-x2), y = abs(y1-y2), a1 = min(x1,x2), a2=max(x1,x2), b1 = min(y1, y2), b2=max(y1,y2);
            if(a1==x1 && b1==y1) printf("%d %d %d %d\n", x1, y1+y, x2, y2-y);
            else if(a1==x2 && b1==y2) printf("%d %d %d %d\n", x2, y2+y, x1, y1-y);
            else if(a1==x1 && b1==y2) printf("%d %d %d %d\n", x1, y1-y, x2, y2+y);
            else printf("%d %d %d %d\n", x2, y2-y, x1, y1+y);
        }
    }
    return 0;
}
