//Write a program to calculate the area of a circle using the ternary operator.
//condition ? expression_if_true : expression_if_false;
#include<stdio.h>
#include<math.h>

#define rajan main
    void rajan(){
int radius;
float area;

float pi=3.14;
printf("Enter a area:\t");
scanf("%d",&radius);
    // Using ternary operator for condition
    area = (radius > 0) ? (pi * pow(radius, 2)) : 0;
     // Print area or an error message
    (radius > 0) ? printf("Area of the circle: %.2f\n", area) : printf("Invalid radius.\n");
}