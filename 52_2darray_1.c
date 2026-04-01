// example of 2D array
// write a program to accept 4 product's 7 day sales data from user and store it into 2D array.
// then display it
#include <stdio.h>
// create constant (read only variable)
#define ROW 4
#define COLUMN 7
/* 
    calculate and display total sales 
    calculate and display average sales 
    calculate and display product & day where minimum sales occurred 
    calculate and display product & day where maximum sales occurred 
    
*/
void main()
{
    // create array
    int sales[ROW][COLUMN];

    for (int r = 0; r < ROW; r++)
    {
        for (int c = 0; c < COLUMN; c++)
        // 0 1 2 3 4 5 6
        {
            printf("enter sales data for %d product %d day", r + 1, c + 1);
            scanf("%d", &sales[r][c]);
        }
    }

    //display 
    for (int r = 0; r < ROW; r++)
    {
        for (int c = 0; c < COLUMN; c++)
        // 0 1 2 3 4 5 6
        {
            printf("[%6d]",sales[r][c]);
        }
        printf("\n"); //new line
    }
}