//Write a program to swap two numbers without using a third variable.
#include<stdio.h>

#define rajan main
    void rajan(){
float num1,num2;
printf("Enter any two numbers : its fully on your wish:\t");
scanf("%f %f",&num1 ,&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("Your swap values are :%f %f",num1,num2);

}