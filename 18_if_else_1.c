// #write a program to findout square or cube of given number. if number is even then calculate & display square. if number is odd calculate and display cube.
#include <stdio.h>
void main()
{
    int number, result, reminder;
    printf("Enter number");
    scanf("%d", &number);  // 4
    reminder = number % 2; // 0
    if (reminder == 1)     // odd
    {
        result = number * number * number; // 343
    }
    else
    {
        result = number * number; // 16
    }
    printf("\n result = %d", result);
}