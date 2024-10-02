#include<stdio.h>
void main(){
    int a[]={2,3,45,6,67,45,3,2,};
    int *ptr=a;
    printf("The value at address %u is %d.",ptr+2,(*ptr+2));

}