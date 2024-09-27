//Write a program to check if a number is even or odd using the modulo operator.
#include<stdio.h>

#define rajan main
    void rajan(){
int number;
printf("Enter a number:\t");
scanf("%i",&number);
if(number%2==0){
   printf("your number is even: %i",number);
    
}
else{
printf("your number is odd thankyou! %i");
}
}