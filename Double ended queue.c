#include <stdio.h>
#include<stdlib.h>
#define max 5
void insertfront();
void insertrear();
void deletefront();
void deleterear();
void display();
int queue[max];
int front = -1, rear = -1;
int main() 
{
    int choice;
    while(1) 
	{
        printf("1.insertfront\n 2.insertrear\n 3.deletefront\n 4.deleterear\n 5.display\n 6.exit\n");
        scanf("%d", &choice);
        switch(choice) 
		{
            case 1: 
                insertfront();
                break;
            case 2: 
                insertrear();
                break;
            case 3: 
                deletefront();
                break;
            case 4: 
                deleterear();
                break;
            case 5: 
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}

void insertfront() {
    int value;
    if((front==0 && rear==max-1) || (front==rear+1)) 
	{
        printf("Queue is full\n");
        return;
    }
    if(front==-1) 
	{
        front=0;
        rear=0;
    } else if(front==0)
        front=max-1;
    else 
        front--;
    printf("Enter value to insert at front: ");
    scanf("%d",&value);
    queue[front]=value;
}

void insertrear() 
{
    int value;
    if((front==0 && rear==max-1) || (front==rear+1)) 
	{
        printf("Queue is full\n");
        return;
    }
    if(front==-1) 
	{
        front=rear=0;
    } else if(rear==max-1)
        rear=0;
    else
        rear++;
    printf("Enter value to insert at rear: ");
    scanf("%d",&value);
    queue[rear]=value;
}

void deletefront() 
{
    if(front==-1) 
	{
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n",queue[front]);
    if(front==rear) 
	{
        front=-1;
        rear=-1;
    } else if(front==max-1)
        front=0;
    else
        front++;
}

void deleterear() 
{
    if(front==-1) 
	{
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n",queue[rear]);
    if(front==rear) 
	{
        front=-1;
        rear=-1;
    } else if(rear==0)
        rear=max-1;
    else
        rear--;
}
void display() 
{
    int i=front;
    if(front==-1) 
	{
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    if(front<=rear) 
	{
        while(i<=rear)
            printf("%d ",queue[i++]);
    } else 
	{
        while(i<=max-1)
            printf("%d ",queue[i++]);
        i=0;
        while(i<=rear)
            printf("%d ",queue[i++]);
    }
    printf("\n");
}