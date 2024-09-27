// Write a program to swap two numbers using a third variable.
#include<stdio.h>

#define rajan main
    void rajan(){
int num_a , num_b,temp;
printf("Enter two number : \t");
scanf("%d %d",&num_a,&num_b);
printf("Before swapping a=%d,b=%d\n",num_a,num_b);
//temp is a temporary variable used to hold the value of one of the two numbers 
temp=num_a;
num_a=num_b;
num_b=temp;
printf("After swaping a=%d,b=%d",num_a,num_b);

}
