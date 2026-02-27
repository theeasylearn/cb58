// write a program to display multiplication table of given number
//   5 x10 =50
//   5 x 9 =45
//   5 x 8 =40
//   5 x 7 =35
#include <stdio.h>
void main()
{
    int number, multiplier, result;
    printf("enter number");
    scanf("%d",&number);
    for(multiplier = 10;multiplier>=1; multiplier--)
    {
        result = number * multiplier; // 5
        printf("%d x %2d = %d \n", number, multiplier, result);
    }
    printf("good bye");
}