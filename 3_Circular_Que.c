//Circular Que Operations
#include <stdio.h>
int Ar[50], front = -1, rear = -1, n; 
int isFull();                         
int isEmpty();
void view();

//function to check whether que is empty
int isEmpty()
{
  if (front == -1 && rear == -1)
    return 1;
  return 0;
}

//function to check whether que is full
int isFull()
{
  if ((rear + 1) % n == front)
    return 1;
  return 0;
}

//function to insert element
int insert()
{
  if (isFull())
  {
    printf("The Circular Queue is Full!! Overflow");
    return 1;
  }
  else if (isEmpty())
  {
    rear = 0;
    front = 0;
  }
  else
  {
    rear = (rear + 1) % n;
  }
  printf("Enter the element to be inserted:");
  scanf("%d", &Ar[rear]);
  view(front, rear);
}

//function to delete element
int delete ()
{
  if (isEmpty())
  {
    printf("Underflow!!!\n");
    return 1;
  }
  else if (front == rear)
  {
    printf("The element deleted is %d", Ar[front]);
    front = -1;
    rear = -1;
  }
  else
  {
    printf("The element deleted is %d", Ar[front]);
    front = (front + 1) % n;
  }
  view(front, rear);
}

void view(int front, int rear) 
{
  int i;
  printf("\nThe Current Queue is\n");
  if (front > rear)
  {
    for (i = front; i < n; i++)
    {
      printf("%d ", Ar[i]);
    }
    for (i = 0; i <= rear; i++)
      printf("%d ", Ar[i]);
  }
  else //case when front<rear
  {
    for (i = front; i <= rear; i++)
      printf("%d ", Ar[i]);
  }
}

void main()
{
  int ch;
  printf("Enter the Circular Queue size:");
  scanf("%d", &n);
  do
  {
    printf("\n---Menu---\n\n");
    printf("1.Insertion\n2.Deletion\n3.Exit\n");
    printf("Enter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    }
  } while (ch < 3);
}
