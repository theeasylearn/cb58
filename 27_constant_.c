/*
    what is constant/final variable?
    constant or final variable is read only variable which must be initialized when it is created. we can not change constant variable in program. if we try to change, error will occured. we can use constant variable in program.
*/
#include <stdio.h>
// #define constant-name-in-capital value
#define PI 3.14
#define YEAR 365
#define NEWLINE '\n'
void main()
{
    int radius;
    float area;
    printf("Enter radius to findout area of circle");
    scanf("%d", &radius);

    area = PI * radius * radius;
    printf("area %f", area);
    // PI = 5.89; //error
    printf("\n year %d", YEAR);
}