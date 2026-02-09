#include<stdio.h>
void main()
{
    unsigned int age;
    signed int difference;
    long int income;
    double location;
    unsigned char gender;
    unsigned long int budget;
    //if we dont store value in variable, variable has any random meaningless value 
    printf("\n age = %u",age);
    printf("\n difference =%d",difference);
    printf("\n income = %ld",income);
    printf("\n gender = %c",gender);
    printf("\n budget = %lu",budget);
    age = 25;
    difference = 250000;
    income = 6589765;
    location = 123456789.123456789;
    gender = 'm';
    budget = 1234567890;
    printf("\n age = %u",age);
    printf("\n difference =%d",difference);
    printf("\n income = %ld",income);
    printf("\n gender = %c",gender);
    printf("\n budget = %lu",budget);
}