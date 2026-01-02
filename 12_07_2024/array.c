// Program to take5 values from theuser and store them in anarray;Printthe elements 
#include<stdio.h>
int main(){
    int array[5];
    printf("enter any five numbers\t");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    for(int i =0 ;i<5;i++){
        printf("Elements are %d\n",array[i]);
    }
    return 0;
}