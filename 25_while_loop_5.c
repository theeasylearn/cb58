// write a program to calculate & display compound interest of given amount, rate and year
#include <stdio.h>
void main()
{
    int year,count;
    float amount, rate, interest;
    // amount = 1000;
    // rate = 10;
    // year = 5;
     printf("Enter amount");
    scanf("%f",&amount);

    printf("Enter rate");
    scanf("%f",&rate);

    printf("Enter year");
    scanf("%d",&year);
    count = 0;
    while(count<year) // 5<5
    {
        interest = (amount * rate * 1) / 100;
        amount = amount + interest;
        count= count + 1;
    }
    printf("amount = %.2f", amount);
}