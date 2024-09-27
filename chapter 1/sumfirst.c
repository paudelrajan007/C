//Write a program to calculate the sum of the first 10 natural numbers using a while loop.
#include<stdio.h>

#define rajan main
    void rajan(){
int sum=0,i=1;
while(i<=10){
    sum+=i;
    i++;
}
printf("Your first 10 natural number is %d: \'Thank you\'.",sum);
}