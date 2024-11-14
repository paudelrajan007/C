#include<stdio.h>
void display(int array[],int array_length);
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);
    }
}
void searching(int array[],int array_length,int element);
void searching(int array[],int array_length,int element){
    for(int i=0;i<array_length;i++){
        if(element==array[i]){
            printf("Element found %d",array[i]);
        }
        
    }

}


void main(){
    int array[100]={1,2,3,4,5,6};
    int array_length=6;
    int element=6;
    searching( array, array_length, element);

}