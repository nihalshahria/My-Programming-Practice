#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int matA[x][x], i, j, k, l, sum=0, sub=0;
    for(i = 0; i<x; i++)
        for(j=0; j<x; j++)
            scanf("%d", &matA[i][j]);
    for(i = 0; i<x; i++)
        sum = sum + matA[i][i];
    for(k=0, l=x-1; k<x; k++, l--)
        sub = sub + matA[k][l];
    //printf("%d\n%d", sum, sub);
    if(sub>sum)
        printf("%d", sub-sum);
    else
        printf("%d", sum-sub);

    return 0;
}
