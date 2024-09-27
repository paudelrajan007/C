//Write a program to calculate the sum of digits of a number using loops.
#include<stdio.h>

#define rajan main
    void rajan(){
int number,sum=0;
printf("Enter any two number\n");

for(int i=1; i<=2;i++){
   scanf("%d",&number);
    sum+=number;

}
printf("your sum of two numbers are : %d\n",sum);
}