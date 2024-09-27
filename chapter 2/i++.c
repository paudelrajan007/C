//Write a program to increment a value by 1 using both i++ and ++i and explain the difference
#include<stdio.h>

#define rajan main
    void rajan(){
int value;
printf("Enter a value :\t");
scanf("%d",&value);
int i=value;
for(int b=0;b<2;b++){
    printf("i++ %d\n",i++);
 printf("i++ %d\n",i);
}
int v=value;
for(int a=0;a<2;++a){
    printf("i-- %d\n",++v);
     printf("i-- %d\n",v);
}
}