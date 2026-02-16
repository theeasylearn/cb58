// simple decision making statement if
/*
    write a program to findout profit or loss amount from given purchase price & sale_price of product
    step
    1   declare variables purchase price & sale_price & difference
    2   accept input for purchase price & sale_price
    3   calculate difference between  sale_price & purchase price
    4   if difference is greater then 0 then it is profit
    5   if difference is below 0 then it is loss
    6   if difference is zero then no profit no less
*/
#include <stdio.h>
void main()
{
    float purchase_price, sale_price, difference;
    printf("Enter purchase price");
    scanf("%f", &purchase_price);
    printf("Enter sales price");
    scanf("%f", &sale_price);
    difference = sale_price - purchase_price;
    if (difference > 0)
    {
        printf("you have made profit of %f amount", difference);
    }
    if (difference < 0)
    {
        printf("you have made loss of %f amount", difference);
    }
    if (difference == 0)
    {
        printf("you have made no profit & no loss ", difference);
    }
    printf("\n good bye...");
}