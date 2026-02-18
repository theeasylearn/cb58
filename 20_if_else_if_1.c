/*
    write a program to calculate & display gross annual income, tax and net income from monthly given income as per below income tax rule 
    annual income                           Tax Rate
    Above Rs. 24,00,000                     30%
    From Rs. 20,00,001 to Rs. 24,00,000	    25%
    From Rs. 16,00,001 to Rs. 20,00,000	    20%
    From Rs. 12,00,000 to Rs. 16,00,000	    15%
    below 12,00,000                          0%

    steps 
    1) accept monthly income 
    2) calculate annual income 
    3) calculate tax as per rule
    4) calculate net income using gross annual income and tax 
*/
#include<stdio.h>
void main()
{
    //declare variables
    int monthly_income,annual_income;
    float tax,net_income;
    printf("enter monthly income");
    scanf("%d",&monthly_income);
    annual_income = monthly_income * 12;
    //calculate tax 
    if(annual_income>2400000)
    {
        tax = (annual_income * 30) / 100;
    }
    else if(annual_income>2000000)
    {
        tax =(annual_income * 25) / 100;
    }
    else if(annual_income>1600000)
    {
        tax =(annual_income * 20) / 100;
    }   
    else if(annual_income>1200000)
    {
        tax =(annual_income * 15) / 100;
    }
    else 
    {
        tax = 0;
    }
    net_income = annual_income - tax;
    //display gross income tax and net income 
    printf("gross income = %d tax = %f net income = %f",annual_income,tax,net_income);
}