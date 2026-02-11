// write a program to findout ascii value of given letter 
#include<stdio.h>
void main()
{
    char letter;
    int ascii;
    printf("Enter any one letter");
    scanf("%c",&letter);
    ascii = letter; //if we store char type variable's value into int variable, c lang store ascii value of character variable into integer variable 
    printf("ascii = %d",ascii);
}