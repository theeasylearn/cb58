// write a program to print following sequence 
// 1000 990 980 ... 600
#include<stdio.h>
void main()
{
    int num;
    num = 1000;
    while(num>=600) // < > <= > >= == !=
    {
        printf("%5d",num);
        num = num - 10;
    }
}