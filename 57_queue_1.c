// #stack using array in c language
#include <stdio.h>
#define SIZE 5
void main()
{
    int choice, item, front = -1, rear = -1, queue[SIZE];
    do
    {
        printf("\n--- Queue Operations Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek (Front)\n");
        printf("4. Rear\n");
        printf("5. Display\n");
        printf("6. isEmpty\n");
        printf("7. isFull\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (front == -1)
            {
                front = 0;
            }
            if (rear == SIZE - 1)
            {
                printf("Queue is full");
            }
            else
            {
                rear++; // 0
                printf("Enter item to insert in queue (Enqueue)");
                scanf("%d", &item); // 10
                queue[rear] = item;
            }
        }
        else if (choice == 2)
        {
            // Dequeue
        }
        else if (choice == 3)
        {
            // Peek (Front)
        }
        else if (choice == 4)
        {
            // Rear
        }
        else if (choice == 5)
        {
            if (front == -1)
            {
                printf("\n queue is empty \n");
            }
            else
            {
                for (int index = front; index <= rear; index++)
                {
                    printf("%d \t", queue[index]);
                }
            }
        }
        else if (choice == 6)
        {
            // isEmpty
        }
        else if (choice == 7)
        {
            // isFull
        }
        else if (choice == 0)
        {
            // Exit
        }
        else
        {
            // Invalid choice
        }
    } while (choice != 0);
}
