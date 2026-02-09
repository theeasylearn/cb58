// write a program to figure out given minutes into hours and remaining minutes
#include<stdio.h>
void main()
{
    int minutes;
    float hours;
    printf("Enter total minutes");
    scanf("%d",&minutes); //90
    hours = minutes / 60; //1.5
    minutes = minutes % 60; //30
    printf("hours = %.0f \n minutes = %d ",hours,minutes);
}