#include<stdio.h>
void main(){
    int array[5];
    printf("Enter a number \t");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
     printf("orginal array :");
    for(int i=0;i<5;i++){
        printf("  %d",array[i]);
        printf("\n");
    }
    int i;
    for(i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(array[j]< array[min]){
                min=j;
            }
        }if(min !=i){
            int temp = array[i];
             array[i]=array[min];
             array[min]=temp;

        }
    }
   printf("sorted array");
    for(i=0;i<5;i++){
    printf(" %d\n",array[i]);

}
printf("Max number %d\n",array[4]);
printf("Min number %d",array[0]);
}