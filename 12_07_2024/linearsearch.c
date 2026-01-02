//Linear /Sequential Searching
#include<stdio.h>

#define rajan main
    void rajan(){
int value[5],i,n,found=0;
printf("Enter 5 numbers:\n");
for(i=0;i<5;i++){
    scanf("%d",&value[i]);

}

printf("Enter the number you want to search\t");
scanf("%d",&n);
for(i=0;i<5;i++){
if(value[i]==n){
    found =1;
    break;
}
}
if(found==0){
    printf("value not found");
}
  else{

 printf("The position is%d",i+1);
}
}
    