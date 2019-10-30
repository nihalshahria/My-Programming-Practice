#include<stdio.h>
int main()
{
    float hh, mm;
    while(scanf("%f:%f", &hh, &mm)==2)
    {
        if(hh==0 && mm ==0)
            break;
        float hour, min, ang;
        hour = hh*5*6+ (0.5*mm);
        min = mm*6;
        if(hour>min)
        {
            if(hour-min>180)
            {
                ang = 360-hour+min;
            }
            else
                ang = hour-min;
        }
        else
        {
            if(min-hour>180)
            {
                ang = 360-min+hour;
            }
            else
                ang = min - hour;
        }
        printf("%0.3f\n", ang);

    }
    return 0;
}
