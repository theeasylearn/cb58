// example of string
#include<stdio.h>
void main()
{
    //declaration string
    char name[32],address[512];
    printf("enter your name(without space)");
    scanf("%s",name);
    printf("enter your address");
    fflush(stdin); //clear input stream
    gets(address);

    //display 
    printf("your name is %s ",name);
    printf("your address is ");
    puts(address);
}