/* write a program to print following pattern
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
 */
#include <stdio.h>
void main()
{
   int numbers;
   int line = 5;
   while (line >= 1) //outer while loop 
   {
      numbers = 1;
      while (numbers <= line) //inner while loop 
      {
         printf("%d ",numbers);
         numbers = numbers + 1;
      }
      printf("\n");
      line--;
   }
}