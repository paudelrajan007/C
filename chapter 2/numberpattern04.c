#include<stdio.h>

#define rajan main
    void rajan(){
int number,i,j;
printf("Enter a number :\t");
scanf("%i",&number);
for(i=number;i>=1;i--)
{
for(j=number;j>=i;j--)
{
    printf("%d",j);
}
printf("\n");
}
}