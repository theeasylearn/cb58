// 2nd example of recursion
#include <stdio.h>
// write a program to convert decimal number into binary number
void printNumber(int count)
{
    if (count <= 10)
    {
        printf("%d \t", count); //3
        count = count + 1; // 3
        printNumber(count); //3
    }
}
void main()
{

    printNumber(1); //
}