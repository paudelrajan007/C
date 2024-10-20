/* 1. Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
Area=Length×Breadth(or Width)   */
#include<stdio.h>

#define rajan main
    void rajan(){
int area,length,width;
printf("Enter length and width of rectangle \n");
scanf("%d %d",&length,&width);
area=length*width;
printf("area of rectangle is %d",area);
}
 