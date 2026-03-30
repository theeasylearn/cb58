// write a program to store reverse of given string into another string
// input: ram output : mar
// input: car output : rac
#include <stdio.h>
#include<string.h>
/*
    1) create 2 array of char type name and reverse
    2) accept string from user in name variable
    3) findout how many character string has (count no of characters)
    4) store answer of step 3 into position variable 
    5) create index variable and store 0 in it
    6) copy letter at position in name variable into reverse variable at index position
    7) increment index by 1 and decrement position variable by 1 
    8) repeat step 6 to 8 till position is > 0
*/
#define SIZE 32
void main()
{
    char name[SIZE], reverse[SIZE], temp;
    int index=0,position;
    printf("Enter your name");
    gets(name);
    fflush(stdin);
    position = strlen(name);
    printf("length of string %d",position);
    position--; //
    
    while(position>=0)
    {
        reverse[index] = name[position];
        position--;
        index++;
    }
    //store null at last position
    reverse[index] = '\0';
    printf("reverse = %s",reverse);
}