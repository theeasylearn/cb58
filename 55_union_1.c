#include <stdio.h>
union marriage
{
    // member variable
    char isMarried; // 1 byte
    int children;   // 2 byte
};
void main()
{
    // create union type variable
    union marriage m1, m2;
    printf("Enter 1st person family detail");
    printf("\n Are you married(t=yes,f=no)");
    fflush(stdin);
    scanf("%c", &m1.isMarried);
    if (m1.isMarried == 't' || m1.isMarried == 'T')
    {
        printf("How many children in your family?");
        scanf("%d", &m1.children);
    }
    
    printf("Enter 2nd person family detail");
    printf("\n Are you married(t=yes,f=no)");
    fflush(stdin);
    scanf("%c", &m2.isMarried);
    if (m2.isMarried == 't' || m2.isMarried == 'T')
    {
        printf("How many children in your family?");
        scanf("%d", &m2.children);
    }
    printf("\n 1st person is Married %c and no of children =%d",m1.isMarried,m1.children);
    printf("\n 2nd person is Married %c and no of children =%d",m2.isMarried,m2.children);
}