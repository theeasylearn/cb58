// example of string
#include<stdio.h>
#define SIZE 32
void main()
{
    //declaration string
    //static initialization 
    char name[] = {'T','H','E',' ','E','A','S','Y','L','E','A','R','N'};
    puts(name);
    printf("%c",name[0]);
    printf("%c \n",name[1]);

    name[3] = '_'; //updating char type variable at 3rd position
    puts(name);
}