/* write a program to calculate factorial of given number */
#include <stdio.h>
void main()
{
    int number, factorial = 1;
    // number = 5;
    printf("enter number to findout it's factorial");
    scanf("%d",&number); 
    // 1 * 2 * 3 * 4 * 5
    // 5 * 4 * 3 * 2 * 1
    while(number>0)
    {
        factorial = number * factorial; // 5
        number = number - 1;
    }
    printf("%d", factorial); //
}