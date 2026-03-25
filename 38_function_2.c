#include <stdio.h>
// create/define user define function
// with return value without argument(input) function
float getPi()
{
    //local variable (variable created inside function)
    float pi = 3.141516;
    return pi; 
}
// with return value with argument(input) function
float getArea(int radius)
{
    //local variable (variable created/declared inside function)
    float pi = getPi(); //we have called function getPi
    float area = pi * radius * radius; //πr2
    return area;
}
void main()
{
    int radius;
    float area;
    printf("enter radius");
    scanf("%d",&radius);

    //run/execute/call function
    area = getArea(radius);
    printf("area of circle %.2f",area);
}
