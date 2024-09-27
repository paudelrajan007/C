//Write a program to reverse a given number using loops
#include<stdio.h>

#define rajan main
    void rajan(){
int num,reverse=0,remainder,orgnum;
printf("Enter a number :\t");
scanf("%d",&num);
orgnum=num;
while(num !=0 ){
    remainder = num%10;
    reverse = reverse*10+remainder;
    num=num/10;
}
printf("your reverse of %d is %d.",orgnum,reverse);

}