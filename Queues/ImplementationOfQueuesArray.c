#include <stdio.h>
#define N 10

int queue[N];
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

void Enqueue(int element)
{
    if (isFull() == 1)
    {
        printf("\n\nQueue is Overflow or Full\n\n");
    }
    else
    {
        printf("\nEnter the inserted element: ");
        scanf("%d", &element);
        rear++;
        queue[rear] = element;
    }
}

void Dequeue()
{
    if (isEmpty() == 1)
    {
        printf("\n\nQueue is UnderFlow or Empty\n\n");
    }

    else
    {
        int remove;
        remove = queue[front];
        front++;
        printf("\n\n Dequeue element is %d\n\n", remove);
    }
}

void frontElement()
{
    if (isEmpty() == 1)
    {
        printf("\n\n There is no element in Top\n\n");
    }
    else
    {
        printf("\n\n First element on Queue is: %d\n\n", queue[front]);
    }
}

void display()
{
    printf("\n\n\n");
    if (isEmpty() == 1)
    {
        printf("\n\nQueue is Empty\n\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("\t%d\t", queue[i]);
        }
    }
    printf("\n\n\n");
}

int main()
{
    int option, ele, stop = 1;
    do
    {
        printf("Choose the Option: \n");
        printf("1: To Enqueue the element on queue: \n");
        printf("2: To Dequeue the element on queue: \n");
        printf("3: To display th Queue: \n");
        printf("4: to display the front element on queue: \n");
        printf("5: Exist\n\n");
        printf("Enter your Choose: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            if (isFull() == 1)
            {
                printf("\nQueue is Full\n");
            }
            else
            {
                Enqueue(ele);
            }
            break;
        }

        case 2:
        {
            if (isEmpty() == 1)
            {
                printf("\nQueue is Empty\n");
            }
            else
            {
                Dequeue();
            }
            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
        {
            frontElement();
            break;
        }

        case 5:
        {
            stop = 0;
            break;
        }
        default:
        {
            printf("\nInvalid Option\n\n");
        }
        }
    } while (stop);

    return 0;
}