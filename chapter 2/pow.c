//Write a program to calculate the power of a number (x^y) using loops.
#include<stdio.h>
#include<math.h>
#define rajan main
    void rajan(){
        int x,y;
       
         double a;
        printf("Enter a number :\t");
        scanf("%d %d",&x,&y);
        for(int i=1;i<=2;i++){
             a= pow(x,y);
        } 
        printf("%.1f",a);
}