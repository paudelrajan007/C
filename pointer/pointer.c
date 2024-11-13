#include<stdio.h>
void main(){
    int num =10;
    int *ptr=&num;
    int _age=*ptr;
    printf("%d",*ptr);

}