#include<stdio.h>
#include<math.h>
void square(int a);
void square(int a){
    a = pow(a,2);
    printf("square is : %d",a);
}

#define rajan main
    void rajan(){
        int num;
printf("enter a number\t ");
scanf("%d",&num);
square(num);
}