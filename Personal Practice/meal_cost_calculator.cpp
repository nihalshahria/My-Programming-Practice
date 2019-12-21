#include<bits/stdc++.h>
using namespace std;
int main()
{


    int abir, joy, shusan, shohag, nihal, maruf, efaz;
    float meal_cost, total_cost, total_meal, house_rent = 10500, bua_bill = 2600, gas = 1150, wifi = 1200/7;

    //Marketing cost of all.
    printf("Abir spent = ");
    scanf("%d", &abir);
    printf("Joy spent = ");
    scanf("%d", &joy);
    printf("Shusan spent = ");
    scanf("%d", &shusan);
    printf("Sojol spent = ");
    scanf("%d", &shohag);
    printf("Nihal spent = ");
    scanf("%d", &nihal);
    printf("Maruf spent = ");
    scanf("%d", &maruf);
    printf("Efaz spent = ");
    scanf("%d", &efaz);
    cout << "House rent = "<< house_rent << endl;
    cout<<"Khalar beton = "<< bua_bill << endl;
    cout<<"Gas Bill = "<<gas<<endl;
    cout<<"Wifi Bill = 1200"<<endl;
    total_cost= abir+joy+shusan+shohag+nihal+maruf+efaz;

    //Meal number of all
    int m1, m2, m3, m4, m5, m6, m7;
    printf("\nAbir's meal number = ");
    scanf("%d", &m1);
    printf("Joy's meal number = ");
    scanf("%d", &m2);
    printf("Shusan's meal number = ");
    scanf("%d", &m3);
    printf("Sojol's meal number = ");
    scanf("%d", &m4);
    printf("Nihal's meal number = ");
    scanf("%d", &m5);
    printf("Maruf's meal number = ");
    scanf("%d", &m6);
    printf("Efaz's meal number = ");
    scanf("%d", &m7);
    total_meal= m1+m2+m3+m4+m5+m6+m7;

    meal_cost = total_cost / total_meal;
    printf("\nTotal meal cost = %f\n", total_cost);
    printf("Total meal = %f\n", total_meal);
    printf("Cost per meal = %f\n", meal_cost);

    //Desired Output
    printf("\nif anyone's pay is negative then he will get that much money\n");
    //Abir
    printf("\n\nAbir spent = %d\nAbir's meal number = %d\nAbir's cost = %f\nAbir will pay = %0.0f\n", abir, m1, (meal_cost*m1)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m1+house_rent/7+bua_bill/7)+(gas/7)-abir));
    //Joy
    printf("\n\nJoy spent = %d\nJoy's meal number = %d\nJoy's cost = %f\nJoy will pay = %0.0f\n", joy, m2, (meal_cost*m2)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m2)+(house_rent/7)+(bua_bill/7)+(gas/7)-joy));
    //Shusan
    printf("\n\nShusan spent = %d\nShusan's meal number = %d\nShusan's cost = %f\nShusan will pay = %0.0f\n", shusan, m3, (meal_cost*m3)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m3)+(house_rent/7)+(bua_bill/7)+(gas/7)-shusan));
    //Shojol
    printf("\n\nSojol spent = %d\nSojol's meal number = %d\nSojol's cost = %f\nSojol will pay = %0.0f\n", shohag, m4, (meal_cost*m4)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m4)+(house_rent/7)+(bua_bill/7)+(gas/7)-shohag));
    //Nihal
    printf("\n\nNihal spent = %d\nNihal's meal number = %d\nNihal's cost = %f\nNihal will pay = %0.0f\n", nihal, m5, (meal_cost*m5)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m5)+(house_rent/7)+(bua_bill/7)+(gas/7)-nihal));
    //Maruf
    printf("\n\nMaruf spent = %d\nMaruf's meal number = %d\nMaruf's cost = %f\nMaruf will pay = %0.0f\n", maruf, m6, (meal_cost*m6)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m6)+(house_rent/7)+(bua_bill/7)+(gas/7)-maruf));
    //Efaz
    printf("\n\nEfaz spent = %d\nEfaz's meal number = %d\nEfaz's cost = %f\nEfaz will pay = %0.0f\n", efaz, m7, (meal_cost*m7)+(house_rent/7)+(bua_bill/7)+(gas/7)+wifi, ceil(wifi+(meal_cost*m7)+(house_rent/7)+(bua_bill/7)+(gas/7)-efaz));

    return 0;
}
