#include<stdio.h>
int main()
{
    int total_cost, total_meal, m, spent;
    float meal;
    printf("Total cost = ");
    scanf("%d", &total_cost);

    printf("You spent = ");
    scanf("%d", &spent);

    printf("Total meal = ");
    scanf("%d", &total_meal);

    meal = total_cost/total_meal;

    printf("Cost per meal = %f\n", meal);
    printf("Your meal = \n");
    scanf("%d", &m);
    printf("Your Bill = %f\n", meal*m);
    printf("You will pay more %f\n", (meal*m)-spent);
    return 0;
}
