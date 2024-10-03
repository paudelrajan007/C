//  Insertion
#include<stdio.h>
void main(){
    int a[50],size,i,num,possition;
    printf("Enter size of array :\t");
    scanf("%d",&size);
    printf("Enter elements of array :\t");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);}
  printf("Enter data u want to insert :\t");
  scanf("%d",&num);
  printf("Enter possition :\t");
  scanf("%d",&possition);
  if(possition<=0 || possition>size+1){
    printf("Invlid Possition \"thank you !\"");}else{
    for(i=size-1;i>=possition-1;i--){
        a[i+1]=a[i]; }
    a[possition -1]=num;
    size++;
   for(int i=0;i<size;i++){
    printf("%d",a[i]);}
}}
  
