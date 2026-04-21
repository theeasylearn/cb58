// #stack using array in c language
#include <stdio.h>
#define SIZE 10
// global variable
int item, front = -1, rear = -1, queue[SIZE];
// user defined function
void Enqueue()
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
void Display()
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
void Dequeue()
{
    // Dequeue
    if (front > rear || front == -1)
    {
        printf("\n queue is empty");
        if (rear == SIZE - 1)
        {
            front = -1;
            rear = -1;
        }
    }
    else
    {
        printf("\n value removed from queue %d", queue[front]);
        queue[front] = 0;
        front++;
    }
}
void main()
{
    int choice;
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
            Enqueue(); // call function
        }
        else if (choice == 2)
        {
            Dequeue();
        }
        else if (choice == 3)
        {
            if (front == -1 || front > rear)
            {
                printf("\n queue is empty");
            }
            else
            {
                printf("\n value at queue at %d position is %d", front, queue[front]);
            }
        }
        else if (choice == 4)
        {
            if (front == -1 || front > rear)
            {
                printf("\n queue is empty");
            }
            else
            {
                printf("\n value at queue at %d position is %d", rear, queue[rear]);
            }
        }
        else if (choice == 5)
        {
            Display(); // calling function
        }
        else if (choice == 6)
        {
            if (front == -1 || front > rear)
            {
                printf("\n queue is empty");
            }
        }
        else if (choice == 7)
        {
            if (rear == SIZE - 1)
            {
                printf("\n queue is full");
            }
        }
        else if (choice == 0)
        {
            printf("\n good bye");
        }
        else
        {
            printf("invalid choice");
        }
    } while (choice != 0);
}
