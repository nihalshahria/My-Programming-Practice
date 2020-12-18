#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num, a[16]={0},sum = 0;

        for (int i = 1; i <= 4; ++i){
            cin>>num;
            int x = i*4-1;

            for (int j = 4; j > 0; --j){
                a[x]=num%10;
                num=num/10;
                if((x+1)%2==1) a[x] = 2*a[x];

                for (int k = 0; k < 2; ++k){
                    sum = sum + (a[x]%10);
                    a[x]=a[x]/10;
                }
                x--;
            }
        }
        if(sum%10==0) cout<< "Valid" <<endl;
        else cout<< "Invalid" <<endl;
    }
    return 0;
}
