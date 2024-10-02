#include<stdio.h>

#define rajan main
    void rajan(){

    int number, multiplication[10];
  printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 0; i < 10; i++) {
        multiplication[i] = number * (i + 1);
   
}
 printf("Multiplication Table of %d:\n", number);
    for(int i = 0; i < 10; i++) {
        printf("%d * %d = %d\n", number, i + 1, multiplication[i]);
    }
}