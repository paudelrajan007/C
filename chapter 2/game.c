// // Write a program to find the largest element in an array.
// #include<stdio.h>

// #define rajan main
//     void rajan(){
//         int number1,number2,number3,number4;
//         printf("Enter your first element :\t");
//         scanf("%d",&number1);
//          printf("Enter your second element :\t");
//         scanf("%d",&number2);
//          printf("Enter your third element :\t");
//         scanf("%d",&number3);
//          printf("Enter your forth element :\t");
//         scanf("%d",&number4);
//         if(number1>number2 && number1>number3 && number1>number4){
//         printf("First number is largest of all :\n",number1);
//         }
//   if(number1>number2 && number1>number3 && number1>number4){
//         printf("First number is largest of all :\n%d",number1);
//         }
//           if(number2>number1 && number2>number3 && number2>number4){
//         printf("First number is largest of all :\n%d",number1);
//         }
//           if(number3>number1 && number3>number2 && number3>number4){
//         printf("First number is largest of all :\n%d",number1);
//         }
//           if(number4>number2 && number4>number3 && number4>number4){
//         printf("First number is largest of all :\n%d",number1);
//         }
//     {}
#include<stdio.h>

#define rajan main
void rajan() {
    int number1, number2, number3, number4;
    printf("Enter your first element: ");
    scanf("%d", &number1);
    printf("Enter your second element: ");
    scanf("%d", &number2);
    printf("Enter your third element: ");
    scanf("%d", &number3);
    printf("Enter your fourth element: ");
    scanf("%d", &number4);

    int largest = number1;

    if (number2 > largest) {
        largest = number2;
    }
    if (number3 > largest) {
        largest = number3;
    }
    if (number4 > largest) {
        largest = number4;
    }

    printf("The largest number is: %d\n", largest);
}
