#include <bits/stdc++.h>
using namespace std;
struct SparseTable{
    int n;
    vector<vector<int>> sp;
    function<int(const int&, const int&)>func;
    SparseTable(){};
    SparseTable(const vector<int>& v, function<int(const int&, const int&)>f){
        n = v.size();
        func = f;
        int max_log = 32 - __builtin_clz(n);
        sp.resize(max_log);
        sp[0] = v;
        for(int j = 1; j<max_log; ++j){
            sp[j].resize(n-(1<<j)+1);
            for (int i = 0; i <= n-(1<<j); ++i){
                sp[j][i] = func(sp[j-1][i], sp[j-1][i+(1<<(j-1))]);
            }
        }

    }
    void showTable(){
        for (int i = 0; i < sp.size(); ++i, cout<<"\n")
            for (int j = 0; j < sp[i].size(); ++j)
                cout<<sp[i][j]<<" ";
    }
    int get(int st, int nd){
        int lg = 32-__builtin_clz(nd - st +1)-1;
        return func(sp[lg][st], sp[lg][nd-(1<<lg)+1]);
    }
    long long get_sum(int st, int nd){
        int lg = 32-__builtin_clz(nd - st +1)-1;
        long long sum = 0;
        for(int i = lg; i>=0; i--)
            if((1<<i)<=(nd-st+1))
                sum+=sp[i][st],st+=(1<<i);
        return sum;
    }

};

int main()
{
    int n;
    cin>>n;
    std::vector<int> v(n);;
    for(auto& i:v)cin>>i;
    // SparseTable sp(v, [&](int a, int b){return min(a,b);});
    // SparseTable sp_sum(v, [&](int a, int b){return a+b;});
    // sp_sum.showTable();
    // cout<<sp_sum.get_sum(7,9)<<nl;
    // cout<<sp_sum.get_sum(2,6)<<nl;
}