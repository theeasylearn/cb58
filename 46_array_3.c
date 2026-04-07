// write a program to accept 6 person weight from user and findout & display lowest (minimum) & highest (maximum) weight. use float array
#include <stdio.h>
// create constant (read only variable)
#define SIZE 6
void main()
{
    // create an array
    float weight[SIZE], minimum, maximum;
    int index = 0;
    while (index < SIZE)
    {
        printf("enter %d person weight", index + 1);
        scanf("%f", &weight[index]);
        index++;
    }
    minimum = weight[0]; // assume 0th person minimum
    maximum = weight[0]; // assume 0th person maximum

    for (index = 1; index < SIZE; index++)
    {
        if (weight[index] < minimum)
        {
            minimum = weight[index];
        }
        if (weight[index] > maximum)
        {
            maximum = weight[index];
        }
    }
    printf("\n minimum = %f maximum = %f", minimum, maximum);
}