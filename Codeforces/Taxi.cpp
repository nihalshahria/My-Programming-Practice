#include<stdio.h>
int main()
{
    int n, count = 0, one = 0, two = 0, three = 0;
    scanf("%d", &n);
    int ar[n], i, j;
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]==4)
        {
            count++;
            ar[i]=0;
        }
        if(ar[i]==3)
        {
            three = three+1;
            count++;
        }
        if(ar[i]==2)
            two = two +1;
        if(ar[i]==1)
            one = one +1;
    }
    if(three>=one)
        one = 0;
    else
        one = one -three;
    if(two%2==0)
    {
        count =  count + (two/2);
    }
    else
    {
        two = 2*two+one;
        if(two%4==0)
            count = count + two/4;
        else
            count = count + (two/4)+1;
        one = 0;
    }
    if(one!=0 && one%4==0)
        count = count + one/4;
    else if(one!=0 && one%4!=0)
        count = count + 1+one/4;

    printf("%d\n", count);
    return 0;
}
