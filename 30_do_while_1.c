/*
    write a program to display following series
    1   -2    3   -4  ... 100
*/
#include <stdio.h>
void main()
{
    int count;
    count = 0;
    do
    {
        count = count + 1; // 1
        if (count % 2 == 0)
        {
            printf("%6d", 0 - count);
        }
        else
        {
            printf("%6d", count);
        }
    }while(count<100);
}