#include<stdio.h>
void main(){


int number,i,j;
printf("Enter  number :\t");
scanf("%d",&number);
for(i=1; i<=number;i++){
for(j=i; j<=number;j++){
    printf("%d",j);
}
printf("\n");
}
}