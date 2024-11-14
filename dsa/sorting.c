#include<stdio.h>
void display(int array[],int array_length);
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
         printf("%d\n",array[i]);
    }
}
void sorting(int array[],int array_length);
void sorting(int array[],int array_length){
    for(int i=0;i<array_length;i++){
       for (int j=i+1;j<array_length;j++){
        if(array[i]>array[j]){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
       }
       }
    }
}
void main(){
    int array[100]={1,5,2,9,6};
   int  array_length=5;
    // display(array,array_length);
    sorting(array, array_length);
    display(array,array_length);
}