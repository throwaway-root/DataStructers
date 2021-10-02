#include<stdio.h>

int queue[100],front =-1,rear = -1,n,x;

void enqueue() {
    if(rear == n-1) {
        printf("\n The Queue is full.");
    }
    else {
        printf("\n Enter the element required to add to the Queue :");
        scanf("%d",&x);
        if(front == -1){
            front = rear = 0;
        }
        else {
            rear++ ;
        }
        queue[rear] = x;
        printf("\n The element has been added to the queue.")
    }
}

void dequeue() {
    if(front == -1 ){
        printf("The Queue is empty.");
    }
    else {
        printf("The deleted element from the Queue is %d",queue[front]);
        if(front == rear){
            front = rear = -1 ;
        }
        else {
            front++;
        }
    }
}

void display() {
    if (front == -1) {
        printf("The Queue is empty.");
    }
    else {
        for(int i = front; i <= rear;i++){
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int option;
    printf("\n Enter the size of the Queue :");
    scanf("%d", &n);
    printf("\n Operations to perform using Queue :");
    
    do {
        printf("\n \t 1.Enqueue \n \t 2.Dequeue \n \t 3.Display \n \t 4.Exit");
        printf("\n \n Enter the required option :");
        scanf("%d", &option);

        switch (option) { 
            case 1: {
                enqueue();
                break;
            }

            case 2: {
                dequeue();
                break;
            }

            case 3: {
                display();
                break;
            }
            
            case 4: {
                break;
            }

            default: {
                printf("\n Enter a valid option !");
            }
        }
    } while (option != 4);
}
   
