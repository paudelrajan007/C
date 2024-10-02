//Write a program to print any multlipication of any number using array.
#include<stdio.h>

#define rajan main
    void rajan(){
int array[10];
for( int i=0;i<10;i++){
    array[i]=5*(i+1);
}
for( int i=0;i<10;i++){
    printf("The value of 5 * %d = %d \n",i+1,array[i]);
}
    }