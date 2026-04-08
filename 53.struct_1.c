#include<stdio.h>
//create structure
struct student
{
    //name, age, gender, weight
    char name[32];
    int age;
    float weight;
    char gender;
};
//32+4+4+1 = 41
void main()
{
    //create structure variable 
    struct student b1,b2;
    printf("Enter name");
    gets(b1.name);
    fflush(stdin);
    printf("Enter age");
    scanf("%d",&b1.age);
    printf("Enter weight");
    scanf("%f",&b1.weight);
    fflush(stdin);
    printf("Enter gender (m=male,f=female)");
    scanf("%c",&b1.gender);

    //display
    printf("Student name");
    puts(b1.name);
    printf("\n Age = %d",b1.age);
    printf("\n Weight = %f",b1.weight);
    printf("\n gender = %c",b1.gender);

    //2nd student detail

    printf("Enter name");
    fflush(stdin);
    gets(b2.name);
    fflush(stdin);
    printf("Enter age");
    scanf("%d",&b2.age);
    printf("Enter weight");
    scanf("%f",&b2.weight);
    fflush(stdin);
    printf("Enter gender (m=male,f=female)");
    scanf("%c",&b2.gender);

    //display
    printf("Student name");
    puts(b2.name);
    printf("\n Age = %d",b2.age);
    printf("\n Weight = %f",b2.weight);
    printf("\n gender = %c",b2.gender);


}