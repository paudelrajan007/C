//Write a program to demonstrate the use of bitwise AND, OR, and XOR operators.
#include<stdio.h>

#define rajan main
    void rajan(){
int a,b;
printf("Enter any integers :\t");
scanf("%d %d",&a,&b);
printf("AND %d\n",a & b);
printf("OR %d\n",a | b);
printf("XOR %d\n",a ^ b);
}