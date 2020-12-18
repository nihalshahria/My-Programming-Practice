#include<bits/stdc++.h>
using namespace std;
#define mx                  1000006
std::vector <int> prime;
bool is_composite[mx];
void sieve() {
    std::fill (is_composite, is_composite + mx, false);
    for (int i = 2; i < mx; ++i) {
        if (!is_composite[i])prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] < mx; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
}
