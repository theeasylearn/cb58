//  write a program to calculate and display lucky number of given birth day
//  write a program to calculate and display sum of all digit in given amount
//   input : 12345 process = 1 + 2 + 3 + 4 + 5 output 15
#include <stdio.h>
void main()
{
    int amount, remainder, sum = 0;
    printf("enter amount");
    scanf("%d", &amount);
    for (sum = 0; amount > 0; amount = amount / 10)
    {
        remainder = amount % 10; // 5
        sum = sum + remainder;
    }
    printf("%d", sum); // 123
}