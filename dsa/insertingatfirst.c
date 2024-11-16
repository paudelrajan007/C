#include<stdio.h>
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);
    }
}
void insorting(int array[],int array_length,int element){
    for(int i=array_length;i>0;i--){
         array[i]=array[i-1];
}array[0]=element;
    }
    void main(){
        int array[100]={1,2,3,4,5,6};
        int array_length=6;
        int element=7;
        // printf("previous elements are :%d",array[i]);
        insorting(array,array_length,element);
array_length++;
        display(array,array_length);
    }