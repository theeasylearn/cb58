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
   int astrik, line;
   for (line = 1; line <= 5; line = line + 1)
   {
      for (astrik = 1; astrik <= line; astrik = astrik + 1)
      {
         printf("* ");
      }
      printf("\n");
   }
}