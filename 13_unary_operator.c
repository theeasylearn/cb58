#include<stdio.h>
void main()
{
    int a = 10,b = 0;
    printf("a = %d b = %d \n",a,b); // a = 10 b = 0
    
    // a = a + 1;
    // b = a; 
    // or 
    b = ++a; //prefix 
    printf("a = %d b = %d \n",a,b); // a = 10 b = 0
    
    a = 10;
    // b = a; //b = 10
    // a = a + 1; //a = 11
    // // or 
    b = a++; //postfix
    printf("a = %d b = %d \n",a,b); // a = 10 b = 0
    
    a = 10;
    // b = a; b=10
    // a = a - 1; a=9
    // or 
    b = a--; //postfix
    printf("a = %d b = %d \n",a,b); // a = 10 b = 0
    
    a = 10;
    a = a - 1; //9
    b = a; //
    a = 10;
    // or 
    b = --a; //prefix 
    printf("a = %d b = %d \n",a,b); // a = 10 b = 0


}