#include<stdio.h>
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);
    }
}
void sorting(int array[],int array_length){
     for(int i=0;i<array_length;i++){
        for(int j=i+1;j<array_length;j++){
        if(array[i]>array[j]){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        }
}
            printf("the sorted elements are:\n");
            display(array,array_length);
            printf("the minimum element in this array is :%d\n",array[0]);
}
void main(){
    int array[100]={77,12,8,4,10,6};
    int array_length=6;
sorting(array,array_length);
    }
