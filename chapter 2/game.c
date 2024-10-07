// Write a program to find the largest element in an array.
#include<stdio.h>

#define rajan main
    void rajan(){
        int number1,number2,number3,number4,largest;
        printf("Enter your first element :\t");
        scanf("%d",&number1);
         printf("Enter your second element :\t");
        scanf("%d",&number2);
         printf("Enter your third element :\t");
        scanf("%d",&number3);
         printf("Enter your forth element :\t");
        scanf("%d",&number4);
        if(number1>number2 && number1>number3 && number1>number4){
        printf("First number is largest of all :\n",number1);
        }
        if(number1>largest){
       
        largest=number1;
 
      
          if(number2>largest){
       
        largest=number2;
          if(number3>largest){
       
        largest=number3;
          if(number4>largest){
        
        largest=number4;
          }
          }
          }
        }
  printf("largest number is  :\n%d",largest);
    }

