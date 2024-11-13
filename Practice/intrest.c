#include<stdio.h>
void calculategst(float value);
void calculategst(float value){
value = value + (0.18 * value);
printf("Final price is : %f",value);
}
#define rajan main
    void rajan(){
        float value;
        printf("Enter price \t");
        scanf("%f",&value);
        calculategst(value);
printf("Final price is : %f",value);
}