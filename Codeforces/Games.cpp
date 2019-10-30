#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, tm1[35], tm2[35], counter = 0;
    for(i = 0; i<n; i++)
    {
        scanf("%d%d", &tm1[i], &tm2[i]);
    }
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            if(tm1[i]==tm2[j])
                counter = counter+1;
        }
    }
    printf("%d\n", counter);
    return 0;

}
