#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    int x;
    printf(" \n Enter the element to be inserted to the Queue:  ");
    scanf("%d", &x);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    if ((front == 0) && (rear == 0))
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{

    if ((front == 0) && (rear == 0))
    {
        printf("\n Underflow !!");
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("\n The deleted element is %d. ", front->data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;
    printf(" \n The elements of the queue are : ");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int option;
    printf("\n Operations to perform using Queue :");
    do
    {
        printf("\n \t 1.Enqueue \n \t 2.Dequeue \n \t 3.Display \n \t 4.Exit");
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
            printf("/n Enter a valid option !"); 
        }
        }
    } while (option != 4);
}
