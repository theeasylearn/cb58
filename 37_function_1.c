#include <stdio.h>
// create/define user define function
// without return value without argument function
void printline()
{
    printf("\n");
    for (int count = 1; count <= 80; count++)
        printf("_");
    printf("\n");
}
//without return value with argument function 
void printletter(char letter,int howmanytimes)
{
    printf("\n");
    for (int count = 1; count <= howmanytimes; count++)
        printf("%c",letter);
    printf("\n");
}
void main()
{
    // call/run function
    printline();
    printf("The easylearn");
    printletter('^',60);
    printf("105,223 eva surbhi opp aksharwadi temple, bhavnagar");
    printletter('~',80);
}