#include <stdio.h>
#include <stdlib.h>
#define size 4
int top = -1;
int inp_array[size];
void push();
void pop();
void peek();
void show();
int main() {
    int choice;
    while (1) {
        printf("performOperation stack\n");
        printf("1)push\n2)pop\n3)peek\n4)show\n5)end\n");
        printf("Enter the choice\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                show();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
void push() {
    int n;
    if (top == size - 1) {
        printf("Stack is full\n");
    } else {
        printf("Enter the element\n");
        scanf("%d", &n);
        top++;
        inp_array[top] = n;
    }
}
void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Popped element: %d\n", inp_array[top]);
        top--;
    }
}
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", inp_array[top]);
    }
}
void show() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", inp_array[i]);
        }
        printf("\n");
    }
}