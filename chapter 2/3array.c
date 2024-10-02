//Print 2D array of matrix 3,3.
#include<stdio.h>
void main(){
    int array[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter any Elements of 3,3 matrix : [%d][%d]\t",i,j);
            scanf("%d",&array[i][j]);
        }
    }
     for(int i=0;i<3;i++){
         printf("[ "); 
        for(int j=0;j<3;j++){
           printf("%d ", array[i][j]);  
          
}
 printf("]\n");
     }
}