// #stack using array in c language
#include <stdio.h>
void main()
{
    int choice = 0;
    do
    {
        printf("\nPress 1 to insert new item (push)");
        printf("\nPress 2 to remove item (pop)");
        printf("\nPress 3 to display all item ");
        printf("\nPress 4 to display top most item");
        printf("\nPress 0 to exit from menu");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        if (choice < 0 || choice > 4)
        {
            printf("invalid choice, choice must be in range of 0 to 4\n");
        }
        else if (choice == 1)
        {
            printf("push");
        }
        else if (choice == 2)
        {
            printf("pop");
        }
        else if (choice == 3)
        {
            printf("display all");
        }
        else if (choice == 4)
        {
            printf("display top most item");
        }
        else
        {
            printf("good bye");
        }
    } while (choice != 0);
}
