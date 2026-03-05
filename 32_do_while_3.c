/*
    write a findout whether given number is perfect number not
    28 =  1 + 2 + 4 + 7 + 14 = 28
    06 =  1 + 2 + 3  = 6
    A Perfect Number is a positive number that is equal to the sum of its proper divisors (all divisors except the number itself).
*/
#include <stdio.h>
void main()
{
    int number, reminder, sum = 1, divisor = 2;
    printf("enter number");
    scanf("%d", &number);
    do
    {
        reminder = number % divisor; // 0
        if (reminder == 0)
        {
            sum = sum + divisor; // 3
        }
        divisor = divisor + 1;
    } while (divisor <= number / 2);
    if (sum == number)
    {
        printf("%d is perfect number", number);
    }
    else
    {
        printf("%d is not perfect number", number);
    }
}