// write a program to print following sequence 
// 1 3 5 7 .... 100
#include<stdio.h>
void main()
{
    int num;
    num = 1;
    while(num<=100) // < > <= > >= == !=
    {
        printf("%5d",num);
        num = num + 2;
    }
}