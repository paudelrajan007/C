//Write a program to check number is even or odd.
#include<stdio.h>
void OddEven(int num){
    if(num%2==0){
        printf("Even num %d\n",num);
    }else{
        printf("Odd num %d\n",num);

    }
}
    int main(){
int num;
printf("Enter a number.\t");
scanf("%d",&num);
OddEven(num);
    }
