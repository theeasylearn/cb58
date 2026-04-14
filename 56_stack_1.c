// #stack using array in c language
#include <stdio.h>
#define SIZE 5
void main()
{
    int choice = 0, top = -1, stack[SIZE], item;
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
            if (top > SIZE)
            {
                printf("\nstack overflow");
            }
            else
            {
                top++;
                printf("Enter value to push into stack");
                scanf("%d", &item); // 10
                stack[top] = item;
                printf("item pushed");
            }
        }
        else if (choice == 2)
        {
            if (top < 0)
            {
                printf("stack is empty (underflow)");
            }
            else
            {
                printf("\n value remove from stack %d", stack[top]);
                stack[top] = 0;
                top--;
            }
        }
        else if (choice == 3)
        {
            printf("display all");
            for (int i = top; i >= 0; i--) // 3
            {
                printf("\n %d", stack[i]);
            }
        }
        else if (choice == 4)
        {
            printf("display top most item");
            if (top == -1)
            {
                printf("\n stack is empty");
            }
            else
            {
                printf("top most value in stack %d", stack[top]);
            }
        }
        else
        {
            printf("good bye");
        }
    } while (choice != 0);
}
