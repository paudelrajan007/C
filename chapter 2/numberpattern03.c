#include<stdio.h>

#define rajan main
    void rajan(){
int number,i,j;
printf("Enter a number :\t");
scanf("%d",&number);
for(i=1;i<=number;i++){
     printf("\033[34m");
     printf("\033[44m");
    for(j=1;j<=i;j++){
        printf("%i",i);
    }
    printf("\n");
}
}