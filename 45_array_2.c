// write a program to accept 5 subject marks of students from users & calculate total and average and display marks, total & average
#include <stdio.h>
// create constant (read only variable)
#define SIZE 5
void main()
{
    // create an array
    int marks[SIZE], total = 0;
    float average;
    // accept input
    for (int index = 0; index < SIZE; index = index + 1)
    {
        printf("Enter marks for %d subject", index + 1);
        scanf("%d", &marks[index]);
    }
    // total
    for (int index = 0; index < SIZE; index = index + 1)
    {
        total = total + marks[index];
    }
    // calculate
    average = total / SIZE;
    //display marks
    for (int index = 0; index < SIZE; index = index + 1)
    {
        printf("%d subject = %d \n",index+1, marks[index]);
    }
    //display total & average
    printf("total = %d \naverage = %.2f",total,average);
}