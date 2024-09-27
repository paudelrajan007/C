//Write a program to find whether a number is divisible by both 5 and 7.
#include<stdio.h>

#define rajan main
    void rajan(){
int num;
printf("Enter a number\t");

    scanf("%d",&num);
if(num % 5 == 0 && num % 7 == 0){
    printf("The number %d is divisible by both 5 and 7 \n",num);
}else{
    printf("The number %d is not divisible by both 5 and 7 \"thank you!\".",num);
}
} 