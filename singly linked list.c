#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node
{
	int data;
	struct Node*Next;
};
void insertAtEnd (struct Node**head,int data);
void deleteAtBeginning(struct Node**head);
void travers(struct Node**head);
bool search(struct Node**head,int key);
int main(){
	struct Node*head=NULL;
	int choice,n;
	while(1)
	{
		printf("\n1.Insert\n 2.delete\n 3.travers\n 4.Search\n 5.Exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("Enter the element");
				scanf("%d",&n);
				insertAtEnd(& head,n);
				break;
				case 2:
				deleteAtBeginning(& head);
				break;
				case 3:
				travers(head);
				break;
				case 4:
				printf("Enter the element to search");
				scanf("%d",&n);
				if(search(head,n))
				{
				printf("Element %d found in the list:",n);
				}
				else{
				printf("Not found");
				}
				break;
				case 5:
				exit(0);
				break;
				default:
				printf("invalid choice");
		}
	}
}
void insertAtEnd(struct Node**head,int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->Next=NULL;
	if(*head==NULL){
		*head = newNode;
		return;
	}
	struct Node* temp=*head;
	while(temp->Next!=NULL){
		temp=temp->Next;
	}
	temp->Next=newNode;
}
void deleteAtBeginning(struct Node** head){
	if (*head==NULL){
		printf("List in empty.\n");
		return;
	}
	struct Node*temp = *head;
	*head=(*head)->Next;
	free (temp);
}
void travers(struct Node**head){
	struct Node*temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->Next;
	}
	printf("NULL\n");
}
bool search(struct Node** head,int key){
	struct Node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->Next;
	}
	return false;
}