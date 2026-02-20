/*
    write a program to check given letter is vowel or not 
    vowels are (a,e,i,o,u) 
    rest letter are not vowels consonants 
*/
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter any one letter");
    scanf("%c",&letter);
    if(letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')
    {
        printf("it is vowel");
    }
    else 
    {
        printf("it is consonant");
    }
}