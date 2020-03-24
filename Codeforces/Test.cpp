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
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
using namespace std;
int main(){
    int cow,car,s;
    while(~sfff(cow,car,s))printf("%.5lf\n", (double)((cow*car+car*(car-1))/(double)((cow+car)*(cow+car-s-1))));
    return 0;
}
