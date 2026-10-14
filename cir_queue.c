#include <stdio.h>

#define MAX 5

int main()
{
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value;

    while (1)
    {
        printf("\n--- CIRCULAR QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if ((front == 0 && rear == MAX - 1) || (rear == front - 1))
                {
                    printf("Queue Overflow\n");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);

                    if (front == -1)
                        front = 0;

                    rear = (rear + 1) % MAX;
                    queue[rear] = value;

                    printf("%d inserted into queue\n", value);
                }
                break;

            case 2:
                if (front == -1)
                {
                    printf("Queue Underflow\n");
                }
                else
                {
                    printf("%d deleted from queue\n", queue[front]);

                    if (front == rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                    else
                    {
                        front = (front + 1) % MAX;
                    }
                }
                break;

            case 3:
                if (front == -1)
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    printf("Queue elements: ");
                    int i = front;
                    while (1)
                    {
                        printf("%d ", queue[i]);
                        if (i == rear)
                            break;
                        i = (i + 1) % MAX;
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
