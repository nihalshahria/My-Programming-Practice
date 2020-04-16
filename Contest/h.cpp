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
using namespace std;
char s[200000];
int main() {
    int n, t;
    scanf("%d%d", &n, &t);
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0; i < l; ++i) {
        if (s[i] == '.') {
            for (int j = i + 1; j < l; ++j) {
                if (s[j] > '4') {
                    int k = j;
                    while (s[k] > '4' && t)s[--k]++, t--;
                    s[k + 1] = '\0';
                    break;
                }
            }
            break;
        }
    }
    l = strlen(s) - 1;
    if (s[l] == '/') {
        s[l--] = '\0';
        s[l]++;
        while (s[l] > '9' && l) {
            s[l] -= 10;
            s[--l]++;
        }
        if (s[0] > '9') {
            printf("10");
            for (int i = 1; i < strlen(s); ++i)printf("%c", s[i]);
            return 0;
        }
    }
    printf("%s", s);
    return 0;
}
