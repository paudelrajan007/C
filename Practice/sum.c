#include<stdio.h>
int sum(int a,int b);
int sum(int a, int b){
    return a+b;
}
#define rajan main
    void rajan(){
        int a,b;
printf("Enter two numbers\t");
scanf("%d",&a);
scanf("%d",&b);
int s=sum(a,b);
printf("sum is : %d",s);
}