// write a program to accept 6 person weight from user and findout & display lowest (minimum) & highest (maximum) weight. use float array
#include <stdio.h>
// create constant (read only variable)
#define SIZE 6
void main()
{
    // create an array
    float weight[SIZE], minimum, maximum;
    int index = 0;

    // input
    while (index < SIZE)
    {
        printf("Enter %d person weight", index + 1);
        scanf("%f", &weight[index]);
        index++;
    }

    minimum = weight[0];
    maximum = weight[0];
    index = 0;
    while(index<SIZE)
    {
        if (weight[index] < minimum)
        {
            minimum = weight[index];
        }
        if (weight[index] > maximum)
        {
            maximum = weight[index];
        }
        index++;
    }
    //display minimum maximum
    printf("minimum = %.2f",minimum);
    printf("\nmaximum = %.2f",maximum);
}