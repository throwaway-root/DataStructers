#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue() {
    int x;
    printf("\n Enter the required number to be added to the Queue:");
    scanf("%d",&x);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = 0;

    if(rear == 0) {
        front = rear = newnode;
        rear -> next = front;
    }
    else {
        rear -> next = newnode;
        rear = newnode;
        rear -> next = front;
    }
}

void dequeue() {
    if ((front == 0) && (rear == 0))
    {
        printf("\n Underflow !!");
    }
    else if (front == rear)
    {
        printf(" \n The deleted element is: %d", front->data);
        front = rear = NULL;
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("\n The deleted element is %d", temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display() {
    struct node *temp;
    temp = front;
    if ((front == 0) && (rear == 0))
    {
        printf("\n Underflow !!");
    }
    printf("The elements of the Circular Queue are : ");
    while (temp->next != front)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("%d", rear->data);
    printf("\n");
}

void main() {
    int option;
    printf("\n Operations to perform using Circular Queue :");
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
