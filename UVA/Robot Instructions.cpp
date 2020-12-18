#include<stdio.h>
#include<string.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 1; i<=t; i++)
    {
        int arr[125], p;
        char s1[10], s2[10], s3[10];
        int n, j, count = 0;
        scanf("%d", &n);
        for(j = 1; j<=n;j++)
        {
            scanf("%s", s1);
            if(s1[0]=='L')
            {
                arr[j] = -1;
                count = count+arr[j];
            }
            else if(s1[0]=='R')
            {
                arr[j] = 1;
                count = count+arr[j];
            }
            else if(s1[0]=='S')
            {
                scanf("%s %d", &s2, &p);
                arr[j]=arr[p];
                count = count+arr[j];
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
