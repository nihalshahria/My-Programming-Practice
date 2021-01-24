bool chk_composite(ull n, ull a, ull d, int r) {
    ull x = Pow(a, d, n);
    if (x == 1 || x == n - 1)return false;
    for (int i = 1; i <= r; ++i) {
        x = (__uint128_t)x * x % n;
        if (x == n - 1)return false;
    }
    return true;
}

bool is_prime(ull n){   // use ull & __uint128_t type changer in power function
    if (n < 2)return false;
    int r = 0;
    ull d = n - 1;
    while (!(d & 1)) {
        d >>= 1;
        r++;
    }
    for (auto a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)return true;
        if (chk_composite(n, a, d, r))return false;
    }
    return true;
}