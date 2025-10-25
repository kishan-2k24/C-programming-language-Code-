 #include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert();
void del();
void display();
int front=-1 ,rear=-1;
int queue[maxsize];
int main(){
	int choice;
	while(1){
		printf("\n1)insert\n 2)delete\n 3)display\n 4)exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
				default:
					printf("Invalid choice");
					break;
		}
	}
}
void insert(){
	int item;
	if(front==(rear+1)%maxsize){
		printf("\n Overflow");
		return;
	}
	if(front==-1){
		front=0;;
	}
	rear=(rear+1)%maxsize;
	printf("Enter the Element\n");
	scanf("%d",&item);
	queue[rear]=item;
}
void del(){
	int item;
	if(front==-1){
		printf("\n Underflow");
		return;
	}
	else{
		item=queue[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front=(front+1)%maxsize;
		}
			printf("%d is deleted",item);
	}
}
	void display(){
		int i;
		if(front==-1){
			printf("\n Underflow");
		}
		printf("\nQueue Element are:");
		for(i=front; i!=rear; i=(i+1)%maxsize){
			printf("%d ",queue[i]);
		}
			printf("%d ",queue[i]);
	}