#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert()
void delete()
void display()
int queue[maxsize],priority[maxsize],size=0;
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
	if(size==maxsize){
		printf("Queue is full");
		return;
	}
	int value, priorityValue;
	printf("Enter the value & priority");
	scanf("%d %d",&value,&priorityValue);
	
	queue[size]=value;
	priority queue[size]=priority;
	size++;
	printf("value inserted\n");	
}
void delete(){
	if (size==0){
		printf("Queue is empty");
		return;
	}
	int highest priority=0;
	for(int i=1; i<size;i++){
		if(priority queue[i]>priority queue[highest priority]){
			highest priority=i;
		}
	}
	printf("Delete element %d with priority",queue[highest priority],priority queue[highest priority]);
	for(int i=highest priority;i<size;i++){
		queue[i]=queue[i+1];
		priority queue[i]=priority queue[i+1];
	}
}