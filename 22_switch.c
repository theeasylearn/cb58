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
    switch(letter)
    {
        case 'a':
        case 'A':
        printf("it is vowel and it is a/A");
        break;
        
        case 'e':
        case 'E':
        printf("it is vowel it is e/E");
        break;

        case 'i':
        case 'I':
        printf("it is vowel it is i/I");
        break;

        case 'o':
        case 'O':
        printf("it is vowel it is o/O");
        break;

        case 'u':
        case 'U':
        printf("it is vowel it is u/U");
        break;

        default:
        printf("it is consonant");
        break;
    }
}