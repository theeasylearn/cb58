// write a program to findout which is cheaper product for purchase from 2 product's weight and price.
// also display how much cheaper
// input price and weight of 1st product
// input price and weight of 2nd product
#include <stdio.h>
void main()
{
    float price1, price2, weight1, weight2, price_per_gram_1, price_per_gram_2;
    printf("enter 1st product price");
    scanf("%f", &price1);

    printf("enter 1st product weight");
    scanf("%f", &weight1);

    printf("enter 2nd product price");
    scanf("%f", &price2);

    printf("enter 2nd product weight");
    scanf("%f", &weight2);

    price_per_gram_1 = price1 / weight1;
    price_per_gram_2 = price2 / weight2;

    if (price_per_gram_1 < price_per_gram_2)
    {
        printf("1st product is cheaper to purchase then 2nd product %f", price_per_gram_2 - price_per_gram_1);
    }
    else
    {
        printf("2nd product is cheaper to purchase then 1st product %f", price_per_gram_1 - price_per_gram_2);
    }
    printf("\n good bye.");
}