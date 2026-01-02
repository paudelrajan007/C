#include <stdio.h>

void push(int array_length, int stack[], int *top) {
    int element;
    if (*top == array_length - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Enter element: ");
        scanf("%d", &element);
        (*top)++;
        stack[*top] = element;
    }
}

void pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow\n");
    } else {
        int item = stack[*top];
        (*top)--;
        printf("The deleted item is %d\n", item);
    }
}

void peek(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The peek or top element in the stack is %d\n", stack[top]);
    }
}

void display(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int array_length, choice;
    printf("Enter stack size: ");
    scanf("%d", &array_length);

    int stack[array_length];
    int top = -1;

    do {
        printf("\nMenu:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(array_length, stack, &top);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                peek(stack, top);
                break;
            case 4:
                display(stack, top);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

