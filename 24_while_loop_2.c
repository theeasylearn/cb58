// write a program to print following sequence 
// 500 499 498 .... 300
#include<stdio.h>
void main()
{
    int num;
    num = 500;
    while(num>=300) // < > <= > >= == !=
    {
        printf("%5d",num);
        num = num - 1;
    }
}