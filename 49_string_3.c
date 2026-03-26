// count vowels in string
#include <stdio.h>
#define SIZE 32
void main()
{
    // declaration string
    // static initialization
    char name[SIZE] = "the easylearn";
    int vowel = 0,position;
    puts(name);
    position=0;
    do
    {
        if (name[position] == 'a' || name[position] == 'e' || name[position] == 'i' || name[position] == 'o' || name[position] == 'u')
        {
            vowel++;
        }
        position++;
    }while(position<SIZE);
    printf("no of vowels = %d",vowel);
}