//Write a program to implement a simple calculator using the switch statement.
#include<stdio.h>

#define rajan main
    void rajan(){
char operator;
printf("Enter a operation (+,-,*,/)\t");
scanf("%c",&operator);
float num1,num2;
printf("Enter any two number\t");
scanf("%f %f",&num1,&num2);
switch(operator){
    case'+':
    printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);
    break;
    case'-':
    printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);
    break;
    case'*':
    printf("%.2f * %.2f = %.2f\n",num1,num2,num1*num2);
    break;
    case'/':
    if(num2!=0)
    printf("%.2f / %.2f = %.2f\n",num1,num2,num1/num2);
  else
                printf("Error! Division by zero.\n");
    break;

        default:
            printf("Invalid operator \"thank you !\"\n");
            break;
}  
    } 