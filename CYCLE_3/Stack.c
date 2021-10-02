#include<stdio.h>

int stack[100],top = -1,n,x;

void push() {
    if(top == n-1) {
        printf("\n Stack has overflowed");
    }
    else {
        printf("Enter the required value to add into the Stack :");
        scanf("%d",&x);
        top++ ;
        stack[top] = x;
    }
}

void pop() {
    if(top <= -1) {
        printf("\n Stack does not have elements.");
    }
    else {
        printf("\n The element popped is %d",stack[top]);
        top-- ;
    }
}

void display() {
    if (top <= -1)
    {
        printf("\n Stack does not have elements.");
    }
    else
    {
        printf("\n The elements of the stack are :");
        for (int i = top; i >= 0; i--){
            printf("\n %d",stack[i]);
        }
    }
}

int main() {
    int option;
    printf("\n Enter the size of the Stack :");
    scanf("%d",&n);
    printf("\n Operations to perform using Stack :");
    do {
        printf("\n \t 1.Push \n \t 2.Pop \n \t 3.Display \n \t 4.Exit");
        printf("\n \n Enter the required option :");
        scanf("%d",&option);

        switch(option) {
            case 1: {
                push();
                break;
            }

            case 2: {
                pop();
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
                printf("/n Enter a valid option !");
            }
        }
    } while (option !=4);
}
