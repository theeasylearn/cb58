#include <stdio.h>
void main()
{
    // datatype variable
    // variable declaration with initialization (create variable)
    int num1 = 10, num2 = 20, num3 = 30, result;

    // printf("Enter value for num1");
    // scanf("%d",&num1);

    // printf("Enter value for num2");
    // scanf("%d",&num2);
    
    result = num1 < num2 && num2 < num3; //1
    printf("\n%d = %d < %d && %d < %d", result, num1, num2, num2, num3);

    result = num1 > num2 && num2 < num3; //0
    printf("\n%d = %d < %d && %d < %d", result, num1, num2, num2, num3);

    result = num1 < num2 && num2 > num3; //0
    printf("\n%d = %d < %d && %d < %d", result, num1, num2, num2, num3);

    result = num1 > num2 && num2 > num3; //0
    printf("\n%d = %d < %d && %d < %d", result, num1, num2, num2, num3);


    result = num1 < num2 || num2 < num3; //1
    printf("\n%d = %d < %d || %d < %d", result, num1, num2, num2, num3);

    result = num1 > num2 || num2 < num3; //1
    printf("\n%d = %d < %d || %d < %d", result, num1, num2, num2, num3);

    result = num1 < num2 || num2 > num3; //1
    printf("\n%d = %d < %d || %d < %d", result, num1, num2, num2, num3);

    result = num1 > num2 || num2 > num3; //0
    printf("\n%d = %d < %d || %d < %d", result, num1, num2, num2, num3);

    result = !(num1 > num2);
    printf("\n!(%d = %d > %d)", result, num1, num2);

}