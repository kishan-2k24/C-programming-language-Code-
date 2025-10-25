#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();
int queue[maxsize],size=0;
int priorityqueue[maxsize];
int main(){
	int choice;
	while (1){
		printf("1.insert\n 2.delete\n 3.display\n 4.exit\n");
		scanf("%d",&choice);
		switch(choice){
		case 1:
		insert();
		break;
		case 2:
		delete();
		break; 
		case 3:
		display();
		break;
		case 4:
		exit(0);
		break;
		default:
		printf("Invalid choice");
		}
	}
}
void insert(){
	int value,priority;
	if(size==maxsize){
		printf("Queue is full");
		return;
	}
	printf("Enter the value & priority:");
	scanf("%d %d",&value,&priority); 
	queue[size]=value;
	priorityqueue[size]=priority;
	size++;
	printf("value inserted\n");	
}
void delete(){
	if (size==0){
		printf("Queue is empty");
		return;
	}
	int highestpriority=0;
	for(int i=1; i<size;i++){
		if(priorityqueue[i]>priorityqueue[highestpriority]){
			highestpriority=i;
		}
	}
	printf("Delete element %d with priority",queue[highestpriority],priorityqueue[highestpriority]);
	for(int i=highestpriority;i<size;i++){
		queue[i]=queue[i+1];
		priorityqueue[i]=priorityqueue[i+1];
	}
	size--;
}
void display(){
	if(size==0){
		printf("queue is empty.");
	}
	printf("Queue element are:\n");
	for(int i=0;i<size;i++){
		printf("Element is %d and it's priority is %d\n'",queue[i],priorityqueue[i]);
	}
}