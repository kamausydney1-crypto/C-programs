
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// INSERT CODE
void insert(int x)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full!!\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = x;

        printf("%d has been inserted\n", x);
    }
}

// DELETE CODE
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        printf("%d has been deleted\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// UPDATE CODE
void update(int oldValue, int newValue)
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            if (queue[i] == oldValue)
            {
                queue[i] = newValue;
                printf("%d has been updated to %d\n",
                       oldValue, newValue);
                return;
            }
        }

        printf("Element not found!!\n");
    }
}

// DISPLAY CODE
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// MAIN FUNCTION
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);

    printf("\nQueue elements:\n");
    display();

    delete();

    printf("\nAfter deletion:\n");
    display();

    update(30, 35);

    printf("\nAfter update:\n");
    display();

    return 0;
}

