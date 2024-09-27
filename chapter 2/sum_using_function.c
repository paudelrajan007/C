//Write a program to calculate the sum of two numbers using a user-defined function

#include<stdio.h>
int sum(int, int);
int sum(int x, int y){
    printf("Sum of two num is %d:\n",x+y);
    return x+y;
}
#define rajan main
    void rajan(){
int n1 = 2;
int n2 = 5;
sum(n1,n2);
}