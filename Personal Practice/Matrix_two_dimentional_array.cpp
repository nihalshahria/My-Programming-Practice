#include<bits/stdc++.h>
int main()
{
    int x, w;
    scanf("%d%d", &w, &x);

    int matA[w][x], i, j, k, l;
    for(i = 0; i<w; i++)
    {
        for(j = 0; j<x; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    int y, z;
    scanf("%d%d", &y, &z);

    int matB[y][z];
    for(i = 0; i<y; i++)
    {
        for(j = 0; j<z; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }
    printf("Matrix A:\t\t\t\t\tMatrix A:\n");
    for(i = 0; i<w; i++)
    {
        for(j = 0; j<x; j++)
        {
            printf("\t%d", matA[i][j]);
        }
        printf("\t+");
        for(j = 0; j<z; j++)
        {
            printf("\t%d", matB[i][j]);
        }
        printf("\n");
    }
    /*printf("Matrix B:\n");
    for(i = 0; i<y; i++)
    {
        for(j = 0; j<z; j++)
        {
            printf("\t%d", matB[i][j]);
        }
        printf("\n");
    }*/
    return 0;

}
