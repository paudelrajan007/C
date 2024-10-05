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
  
/*#include <stdio.h>

int main() {
    int a[50],number,index,arraylength,i;
    printf("Enter array length \t:");
    scanf("%d",&arraylength);
    printf("Enter elements \t:");
    for(i=0;i<arraylength;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter number you want to insult :\t");
    scanf("%d",&number);
    printf("Enter index where u want to insult number :\t");
    scanf("%d",&index);
    if(index<0||index>arraylength){
        printf("You reach maximum \"Thank you\"\t");
    }else{
        for(i=arraylength;i>index;i--){
            a[i]=a[i-1];
        }
        a[index]=number;
        arraylength++;
    }for(i=0;i<arraylength;i++){
        printf("%d\n",a[i]);
    }

    return 0;
} */
