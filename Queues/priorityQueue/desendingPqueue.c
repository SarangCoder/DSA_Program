#include <stdio.h>
#define N 10

int pQueue[N];
int rear = -1;
int front = 0;

int isEmpty()
{
    if (rear < front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (rear == N - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(int element)
{
    if (isFull() == 1)
    {
        printf("\n\nQueue is Full\n\n");
    }
    else
    {
        printf("\nEnter the insert elment: ");
        scanf("%d", &element);
        rear++;
        pQueue[rear] = element;
    }
}

void deQueue()
{
    if (isEmpty() == 1)
    {
        printf("\n\nQueue is Empty\n");
    }
    else
    {
        int x, i, temp = 0;
        x = pQueue[front];
        for (i = front + 1; i <= rear; i++)
        {
            if (x > pQueue[i])
            {
                temp = i;
                x = pQueue[i];
            }
        }

        for (i = temp; i <= rear; i++)
        {
            pQueue[i] = pQueue[i + 1];
        }
        rear--;
        printf("\n\nRemove element is %d\n\n", x);
    }
}

void display()
{
    printf("\n\n");
    for (int i = front; i <= rear; i++)
    {
        printf("\t%d\t", pQueue[i]);
    }
    printf("\n\n");
}

int main()
{
    int option, ele, stop = 1;
    do
    {
        printf("\n\nChoose the Option: \n");
        printf("1: To Enqueue the element on queue: \n");
        printf("2: To Dequeue the element on queue: \n");
        printf("3: To display th Queue: \n");
        printf("4: Exist\n\n");
        printf("Enter your Choose: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            enQueue(ele);

            break;
        }
        case 2:
        {
            deQueue();
            break;
        }
        case 3:
        {
            if (isEmpty() == 1)
            {
                printf("\n\nQueue is Empty\n\n");
            }
            else
            {
                display();
            }
            break;
        }
        case 4:
        {
            stop = 0;
            break;
        }
        default:
        {
            printf("\nInvalid Option \n\n");
        }
        }
    } while (stop);

    return 0;
}