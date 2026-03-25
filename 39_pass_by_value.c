// what is pass by value in function. 
#include<stdio.h>
//without return value with argument function
void swap(int a,int b)
{
    printf("\n swap function executed");
    //a = 10, b = 20 
    int temp = a; //10
    a = b; //20
    b = temp; //10
    printf("\n values are swapped \n");
}
void main()
{
    int a = 10, b = 20;
    //call/run function
    printf("\n before swap a = %d b = %d",a,b);
    swap(a,b);
    printf("\n after swap a = %d b = %d",a,b);
}