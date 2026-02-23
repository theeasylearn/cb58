// write a program to print following sequence 
// 1 2 3 4 5 6 7 8 9 10 ... 100
#include<stdio.h>
void main()
{
    int num;
    num = 1;
    while(num<=100) // < > <= > >= == !=
    {
        printf("%4d",num);
        num = num + 1;
    }
}