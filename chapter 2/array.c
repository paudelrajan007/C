// Traversal of array

#include<stdio.h>
void main(){
    int a[50],size,i;
    printf("Enter size of array :\t");
    scanf("%d",&size);
    printf("Enter elements of array :\t");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
  }
  
  printf("Elements in array are :\t");
  for(int i=0;i<size;i++){
    printf("%d",a[i]);
  }
}