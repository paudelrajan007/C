// Write a program to take two numbers as input and print their sum. using for loop
#include<stdio.h>

#define rajan main
    void rajan(){
int num , sum=0,multlipication=1,how_much_num_you_want;
printf("Enter how much number u want\t");
scanf("%d",&how_much_num_you_want);
// Loop to take input and calculate sum and multiplication
for(int i=1; i<=how_much_num_you_want; i++){
    printf("Enter a number %d\t",i);
    scanf("%d",&num);
    sum += num;
    multlipication *=num;
}
    printf("your sum is : %d.\n",sum);
    printf("your multlipication of num is : %d.\n",multlipication);
}
