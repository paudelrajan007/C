#include<stdio.h>
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);
    }
}
void inserting(int array[],int array_length,int element){
    for(int i=array_length-1;i<array_length;i++){
        array[array_length]=array[array_length-1];

    }
     array[array_length]=element;
}

void main(){
    int array[100]={5,10,15,20,25};
    int array_length=5;
    int element=38;
    inserting(array,array_length,element);
    array_length++;
    display(array,array_length);
}