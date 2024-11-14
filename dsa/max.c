#include<stdio.h>
void display(int array[],int array_length){
    for(int i = 0;i<array_length;i++){
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
    printf("sorted array\n");
    display(array,array_length);
printf("your maximum number is :%d\n",array[array_length-1]);
}

void main(){
    int array[100]={1,3,5,4,2,7};

    int array_length =6;
    sorting(array,array_length);
  
   
}
