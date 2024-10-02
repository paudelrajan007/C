//Write a function to swap two numbers using call by reference.
#include<stdio.h>
void swap (int *a ,int *b ){
    int temp = *a;
    *a = *b ;
    *b = temp;
}
void main(){
    int x , y;
    printf("Enter any two numbers :\t");
    scanf("%d %d",&x,&y);
     printf("Before swap: x = %d, y = %d\n", x, y);
      swap(&x, &y);
      printf("After swap: x = %d, y = %d\n", x, y);
}