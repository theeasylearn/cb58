/* write a program to print following pattern
        *
      * *
    * * *
  * * * *
* * * * *
 */
#include <stdio.h>
void main()
{
    int space,line,astrik,count=1;
    for (line = 5; line >= 1; line--)
    {
        for (space = 1; space < line; space++)
        {
            printf("  ");
        }
        for(astrik=1;astrik<=count;astrik++)
        {
            printf("* ");
        }
        count++; //2
        printf("\n"); // new line
    }
}