#include<stdio.h>

void push(int array_length,int stack[],int *top){
    int elements;
    printf("Enter elements \t");
    scanf("%d",&elements);
    if(*top==array_length-1){
        printf("over flow\t");

    }else{
        *top++;
        stack[*top]=elements;
    }
}
pop(int stack[]int *top){
    int item;
    if(*top==-1){
        printf("under flow");
    }else{
        item=stack[*top];
        *top--;
        printf("The deleted items is %d",item);
    }
}
void peek(int stack[],int top){
    if(top==-1){
        printf("stack is empty");

    }else{
        printf("The peek or top element in stack is %d\t",stack[top]);
    }
}
void display(int stack[],int top){
    int i;
    for(i=top;i>0;i--){
        printf("The all element are %d",stack[i]);
    }
}
void main(){
    int array_length,choice;
    printf("Enter array length\t");
    scanf("%d",&array_length);
    int stack[array_length];
    int top=-1;
    do{
        printf("What do you want \t");
        printf("1:push\n2:pop\n3:peek\n:4:display\n:5:exit\n");
        printf("Enter your choice:\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push(array_length,stack[],&top );
            break;
            case 2:
            pop(stack[],&top);
            break;
            case 3:
            peek(stack[],top);
            break;
            case 4:
            display(stack[],top);
            break;
            case 5:
            printf("<<<<We are existing.....from the code>>>>");
            break;
            default:
                      printf("Invalid choice! Try again.\n");
        }
    while (choice != 5);

        }
    
    push();
    pop();
    peek();
    display();

}