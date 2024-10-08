#include<stdio.h>
void main(){


int number,i,j;
printf("\033[46m Enter  number :\t");
scanf("%d",&number);
for(i=1; i<=number;i++){
for(j=i; j<=number;j++){
    printf("\033[44m %d",j);
}
printf("\n");
}
}