#include <bits/stdc++.h>
#define fr(i,x,n)           for(int i=x;i<n;i++)
using namespace std;
int main() {
    int n;
    string str;
    while (scanf("%d", &n)) {
        cin >> str;
        if (n == 0 && str == "0")return 0;
        int phase = 1;
        int l = str.size();
        while (phase < 6) {
            if (phase == 1) {
                fr(i, 0, l) {
                    printf(" ");
                    if (str[i] == '1' || str[i] == '4')fr(j, 0, n)printf(" ");
                    else fr(j, 0, n)printf("-");
                    printf(" ");
                    if (i != l - 1)printf(" ");
                }
                printf("\n");
            }
            else if (phase == 2)
                fr(i, 0, n) {
                fr(j, 0, l) {
                    if (str[j] == '1' || str[j] == '2' || str[j] == '3' || str[j] == '7') {
                        printf(" ");
                        fr(j, 0, n)printf(" ");
                        printf("|");
                    }
                    else if (str[j] == '4' || str[j] == '9' || str[j] == '8' || str[j] == '0') {
                        printf("|");
                        fr(j, 0, n)printf(" ");
                        printf("|");
                    }
                    else {
                        printf("|");
                        fr(j, 0, n)printf(" ");
                        printf(" ");
                    }
                    if (j < l - 1)printf(" ");
                }
                printf("\n");
            }
            if (phase == 3) {
                fr(i, 0, l) {
                    printf(" ");
                    if (str[i] == '1' || str[i] == '7' || str[i] == '0') fr(j, 0, n)printf(" ");
                    else fr(j, 0, n)printf("-");
                    printf(" ");
                    if (i != l - 1)printf(" ");
                }
                printf("\n");
            }
            if (phase == 4)
                fr(i, 0, n) {
                fr(j, 0, l) {
                    if (str[j] == '1' || str[j] == '4' || str[j] == '3' || str[j] == '7' || str[j] == '5' || str[j] == '9') {
                        printf(" ");
                        fr(j, 0, n)printf(" ");
                        printf("|");
                    }
                    else if (str[j] == '6' || str[j] == '8' || str[j] == '0') {
                        printf("|");
                        fr(j, 0, n)printf(" ");
                        printf("|");
                    }
                    else {
                        printf("|");
                        fr(j, 0, n)printf(" ");
                        printf(" ");
                    }
                    if (j != l - 1)printf(" ");
                }
                printf("\n");
            }
            if (phase == 5) {
                fr(i, 0, l) {
                    printf(" ");
                    if (str[i] == '1' || str[i] == '4' || str[i] == '7') fr(j, 0, n)printf(" ");
                    else fr(j, 0, n)printf("-");
                    printf(" ");
                    if (i != l - 1)printf(" ");
                }
                printf("\n");
            }
            phase++;
        }
        printf("\n");
    }
    return 0;
}
