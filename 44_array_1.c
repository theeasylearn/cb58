// concept of array
#include<stdio.h>
void main()
{
    //create an array
    //datatype array-name[size]
    int marks[6];
    float weight[5];

    //store value 
    marks[0] = 85;
    marks[1] = 70;
    marks[2] = 90;
    marks[3] = 80;
    marks[4] = 95;
    marks[5] = 99;

    //display
    // printf("1st subject marks %d",marks[0]);
    // printf("\n 2nd subject marks %d",marks[1]);
    // printf("\n 3rd subject marks %d",marks[2]);
    // printf("\n 4th subject marks %d",marks[3]);
    // printf("\n 5th subject marks %d",marks[4]);
    // printf("\n 6th subject marks %d",marks[5]);

    // or 
    for(int position=0;position<6;position++)
    {
        printf("%d subject marks %d \n",position+1,marks[position]);
    }

}