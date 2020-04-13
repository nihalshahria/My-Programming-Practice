/*
          _____       __   __   __      __                  __
         |     \     |  | |  | |  |    |  |       /\       |  |
         |  |\  \    |  | |  | |  |    |  |      /  \      |  |
         |  | \  \   |  | |  | |  |____|  |     / /\ \     |  |
         |  |  \  \  |  | |  | |   ____   |    / /__\ \    |  |
         |  |   \  \ |  | |  | |  |    |  |   / ______ \   |  |
         |  |    \  \|  | |  | |  |    |  |  / /      \ \  |  |_________
         |__|     \_____| |__| |__|    |__| /_/        \_\ |____________|
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
find_by_order(k) = returns an iterator to the k-th largest element (counting from zero)
order_of_key(k) = the number of items in a set that are strictly smaller than k.
using namespace std;
int main(){
    ordered_set s;
    ordered_multiset ms;
    int x, i;

    int ith_element= *(s.find_by_order(i));
    ith_element= (*ms.find_by_order(i)).first;

    int smaller_than_x= s.order_of_key(x);
    smaller_than_x= ms.order_of_key({x, 0});

    if(s.find(x)!=s.end()) s.erase(s.find(x));
    ms.erase(ms.lower_bound({x, 0}));

    s.insert(x);
    ms.insert({x, i++});
    return 0;
}
