#include <stdio.h>

int cqueue[100], front = -1, rear = -1, n, x;

void enqueue()
{
    if ((rear == n - 1 && front == 0) || front == rear + 1)
    {
        printf("\n The Queue is full.");
    }
    else
    {
        printf("\n Enter the element required to add to the Queue :");
        scanf("%d", &x);
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n ;
        }
        cqueue[rear] = x;
        printf("\n The element has been added to the queue.");
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("The Queue is empty.");
    }
    else
    {
        printf("The deleted element from the Queue is %d", cqueue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }
}

void display()
{
    int i = front;
    if (front == -1)
    {
        printf("The Queue is empty.");
    }
    else
    {
        printf("\n The Circular Queue is : ");
        while (i != rear){
            printf(" %d",cqueue[i]);
            i = (i + 1) % n ;
        }
        printf(" %d", cqueue[rear]);
    }
}

int main()
{
    int option;
    printf("\n Enter the size of the Queue :");
    scanf("%d", &n);
    printf("\n Operations to perform using Circular Queue :");
    printf("\n \t 1.Enqueue \n \t 2.Dequeue \n \t 3.Display \n \t 4.Exit");
    do
    {
        printf("\n \n Enter the required option :");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            enqueue();
            break;
        }

        case 2:
        {
            dequeue();
            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
        {
            break;
        }

        default:
        {
            printf("\n Enter a valid option !");
        }
        }
    } while (option != 4);
}
