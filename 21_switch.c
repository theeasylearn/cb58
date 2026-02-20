/*
    write a program to do ,addition or substraction or  multiplication or division between two given number based upon user choice.
    */

#include <stdio.h>
void main()
{
    int num1, num2, choice;
    float result;

    printf("Enter value for num1");
    scanf("%d", &num1);

    printf("Enter value for num2");
    scanf("%d", &num2);

    printf("press 1 for addition\npress 2 for subtraction\npress 3 for multiplication \npress 4 for division \n enter your choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // choice == 1
        result = num1 + num2;
        break;
    case 2: // choice == 2
        result = num1 - num2;
        break;
    case 3: // choice == 3
        result = num1 * num2;
        break;
    case 4: // choice == 4
        result = num1 / num2;
        break;
    default:
        printf("invalid choice \n");
    }
    if (choice >= 1 && choice <= 4)
    {
        printf("result = %f", result);
    }
}