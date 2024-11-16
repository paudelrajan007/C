#include<stdio.h>
void display(int array[],int array_length){
    for(int i=0;i<array_length;i++){
        printf("%d\n",array[i]);
    }
}
int sum(int array[],int array_length){
        int sum=0;
    for(int i=0;i<array_length;i++){
 sum= sum+array[i];
    }return sum;
    }
    void main(){
        int array[100]={1,2,3,4,5,6};
        int array_length=6;
        // printf("previous elements are :%d",array[i]);
        int total_sum= sum(array,array_length);
        printf("The sum of all elements in array are:%d\n",total_sum);

        display(array,array_length);
    }
