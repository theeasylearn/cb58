#include <stdio.h>
void main()
{
    int a = 10, b = 3,result;

    // a = a + b; //13
    a+=b;
    printf("\n a = %d b = %d",a,b);
    // a = a - b;
    a-=b;
    printf("\n a = %d b = %d",a,b);
    
    // a = a * b;
    a*=b;
    printf("\n a = %d b = %d",a,b);
    
    // a = a / b;
    a/=b;
    
    printf("\n a = %d b = %d",a,b);
    // a = a % b;
    a%=b;
    printf("\n a = %d b = %d",a,b);
}