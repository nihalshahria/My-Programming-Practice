#include<stdio.h>
int main()
{
    int abir, joy, shusan, shohag, nihal, maruf, efaz;
    float meal_cost, total_cost, total_meal;

    //Marketing cost of all.
    printf("Abir spent = ");
    scanf("%d", &abir);
    printf("Joy spent = ");
    scanf("%d", &joy);
    printf("Shusan spent = ");
    scanf("%d", &shusan);
    printf("Shohag spent = ");
    scanf("%d", &shohag);
    printf("Nihal spent = ");
    scanf("%d", &nihal);
    printf("Maruf spent = ");
    scanf("%d", &maruf);
    printf("Efaz spent = ");
    scanf("%d", &efaz);
    total_cost= abir+joy+shusan+shohag+nihal+maruf+efaz;

    //Meal number of all
    int m1, m2, m3, m4, m5, m6, m7;
    printf("\nAbir's meal number = ");
    scanf("%d", &m1);
    printf("Joy's meal number = ");
    scanf("%d", &m2);
    printf("Shusan's meal number = ");
    scanf("%d", &m3);
    printf("Shohag's meal number = ");
    scanf("%d", &m4);
    printf("Nihal's meal number = ");
    scanf("%d", &m5);
    printf("Maruf's meal number = ");
    scanf("%d", &m6);
    printf("Efaz's meal number = ");
    scanf("%d", &m7);
    total_meal= m1+m2+m3+m4+m5+m6+m7;

    meal_cost = total_cost / total_meal;
    printf("\nTotal cost = %f\n", total_cost);
    printf("Total meal = %f\n", total_meal);
    printf("Cost per meal = %f\n", meal_cost);

    //Desired Output
    printf("\nif anyone's pay is negative then he will get that much money\n");
    printf("\n\nAbir spent = %d\nAbir's meal number = %d\nAbir's cost = %f\nAbir will pay = %f\n", abir, m1, meal_cost*m1, (meal_cost*m1)-abir);
    printf("\n\nJoy spent = %d\nJoy's meal number = %d\nJoy's cost = %f\nJoy will pay = %f\n", joy, m2, meal_cost*m2, (meal_cost*m2)-joy);
    printf("\n\nShusan spent = %d\nShusan's meal number = %d\nShusan's cost = %f\nShusan will pay = %f\n", shusan, m3, meal_cost*m3, (meal_cost*m3)-shusan);
    printf("\n\nShohag spent = %d\nShohag's meal number = %d\nShohag's cost = %f\nShohag will pay = %f\n", shohag, m4, meal_cost*m4, (meal_cost*m4)-shohag);
    printf("\n\nNihal spent = %d\nNihal's meal number = %d\nNihal's cost = %f\nNihal will pay = %f\n", nihal, m5, meal_cost*m5, (meal_cost*m5)-nihal);
    printf("\n\nMaruf spent = %d\nMaruf's meal number = %d\nMaruf's cost = %f\nMaruf will pay = %f\n", maruf, m6, meal_cost*m6, (meal_cost*m6)-maruf);
    printf("\n\nEfaz spent = %d\nEfaz's meal number = %d\nEfaz's cost = %f\nEfaz will pay = %f\n", efaz, m7, meal_cost*m7, (meal_cost*m7)-efaz);

    return 0;
}
