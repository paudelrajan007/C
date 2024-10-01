#include<stdio.h>
void main(){
    int marks[5];
printf("Enter marks of 5 student\n");
for( int i = 0; i< 5;i++){
    scanf("%d",&marks[i]);

}
for( int i =0; i< 5;i++){


printf(" The value of marks at index %d is %d\n",i, marks[i]);
}
}
