#include<stdio.h>
void display(int array[],int array_length);
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);

    }
}
    void deletion(int array[],int arraylenght,int index);
    void deletion(int array[],int arraylenght,int index){
        for(int i=index;i<arraylenght;i++){
            array[i]=array[i+1];
        

    }

}
void main(){
    int array[100]={5,10,55,15,20};
    int array_length=5;
    int array_index=2;
deletion(array,array_length,array_index);

    array_length--;
    display(array,array_length);
}