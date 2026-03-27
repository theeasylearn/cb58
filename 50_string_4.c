#include <stdio.h>
/*
    create 2 array of char type name and name2
    accept input in 1st array
    fetch letter at 0th position in 1s array & store in char variable
    findout ascii value of that letter and store it into integer variable ascii
    subtract 32 from that integer variable
    store that integer variable into character variable
    copy that character variable into name2 at the same position
    repeat this process for each and every letter in 1st array
*/
#define SIZE 32
void main()
{
    char name[SIZE], name2[SIZE], lower, upper;
    int ascii,index=0;
    printf("Enter your name");
    gets(name);
    fflush(stdin);
    while(index<SIZE && name[index] != '\0')
    {
        lower = name[index]; // e
        ascii = lower;   // when we copy char variable into int variable, int variable store ascii value of letter stored in lower variable
        //printf("ascii %d lower %c", ascii, lower);
        ascii = ascii - 32;
        upper = ascii;
        //printf(" upper = %c \n", upper);
        name2[index] = upper;
        index= index + 1;
    }
    name2[index] = '\0';
    printf("name2 = %s ",name2);
}