// write a program to display multiplication table of given number
//   5 x 1 = 5
//   5 x 2 =10
//   5 x 3 =15
//   5 x10 =50
#include <stdio.h>
void main()
{
    int number, multiplier, result;
    printf("enter number");
    scanf("%d",&number);
    for(multiplier = 1;multiplier<=10; multiplier++)
    {
        result = number * multiplier; // 5
        printf("%d x %2d = %d \n", number, multiplier, result);
    }
    printf("good bye");
}