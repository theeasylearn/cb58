#include <stdio.h>
// create structure
struct student
{
    // name, age, gender, weight
    char name[32]; //array within structure
    int age;
    float weight;
    char gender;
};
// 32+4+4+1 = 41
void main()
{
    // create array of structure
    struct student batch[3];
    for (int index = 0; index < 3; index++)
    {
        printf("Enter %d student detail \n Enter name", index + 1);
        gets(batch[index].name);
        fflush(stdin);
        printf("Enter age");
        scanf("%d", &batch[index].age);
        printf("Enter weight");
        scanf("%f", &batch[index].weight);
        fflush(stdin);
        printf("Enter gender (m=male,f=female)");
        scanf("%c", &batch[index].gender);
        fflush(stdin);
    }

    // display
    for (int index = 0; index < 3; index++)
    {
        printf("%d student detail \n ", index + 1);
        printf("Student name ");
        puts(batch[index].name);
        printf("\n Age = %d", batch[index].age);
        printf("\n Weight = %f", batch[index].weight);
        printf("\n gender = %c", batch[index].gender);
    }
}