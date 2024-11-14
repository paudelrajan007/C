#include<stdio.h>
void display(int array[],int array_length);
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);
    }
}
void inserting(int array[],int array_length,int element,int array_index);
void inserting(int array[],int array_length,int element,int array_index){
    for(int i=array_length;i>array_index;i--){
        array[i]=array[i-1];

    }
    array[array_index]=element;
}
void main(){
    int array[100]={5,10,15,20,25};
    int array_length=5;
    int element=55;
    int array_index=2;
// display(array,array_length);
inserting(array,array_length,element,array_index);

    array_length++;
    display(array,array_length);
}