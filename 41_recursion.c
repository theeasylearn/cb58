// 1st example of recursion
#include <stdio.h>
// 1 2 3 4 5 6 ... 10 using recursion
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