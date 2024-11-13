#include<stdio.h>
void display(int array[],int number);
void insertion(int array[],int arraysize,int element,int capacity,int arrayindex);
void display(int array[],int number){
    for(int i=0;i<number;i++){
        printf("%d\n",array[i]);
    }
}
void insertion(int array[],int arraysize,int element,int capacity,int arrayindex){
if(arraylenght>=capacity){
    return -1;
}
for(int i=arraylength,i>arrayindex;i--){
    array[i]=array[i-1];

}
    array[arrayindex]=element;
    array_length++;
}
    void main(){
        int array[100]={1,4,56,4,5};
        int arraysize=5,element=66,arrayindex=2;
        insertion(array[],arraysize,100,arrayindex);
        display(array,arraysize);
     array_length++;
      display(array,arraysize);
}