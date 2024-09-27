// Write a program to take two numbers as input and print their sum.
#include<stdio.h>

#define rajan main
    void rajan(){
int number1,number2,sum;
printf("Enter a number 1 : ");
scanf("%i",&number1);
printf("Enter a number 2 : ");
scanf("%i",&number2);
// Using if statement to check if both numbers are positive
if(number1 >=0 && number2 >=0){
    sum = number1+number2;
    printf("sum of both numbers : %i",sum);
}else{
    printf("You can't take non negative numbers : 'Thank you'");
}
}