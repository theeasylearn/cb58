// #write a program to reverse 2 digit given numbers
// input : 19 output 91
#include<stdio.h>
void main()
{
    int number = 19,reverse;
    int first,last;
    printf("Enter number");
    scanf("%d",&number);
    last = number % 10; //9
    first = number / 10; //1
    reverse = last * 10 + first; //9 + 1 = 10
    printf("reverse = %d",reverse);
}