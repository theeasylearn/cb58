// write a program to accept 5 subject marks of students from users & calculate total and average and display marks, total & average
#include <stdio.h>
// create constant (read only variable)
#define SIZE 5
void main()
{
    // create an array
    int marks[SIZE], total = 0;
    float average;

    for (int index = 0; index < SIZE; index++)
    {
        printf("Enter marks for %d subject", index + 1);
        scanf("%d", &marks[index]);
    }

    for (int index = 0; index < SIZE; index++)
    {
        total = total + marks[0];
    }

    // calculate
    average = total / SIZE;
    for (int index = 0; index < SIZE; index++)
    {
        // display marks
        printf("%d subject marks = %d \n",index+1,marks[index]);
    }
    
    // display total & average
    printf("total = %d \naverage = %.2f", total, average);
}