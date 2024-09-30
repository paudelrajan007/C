//Write a function to check if a number is prime and call it from main().
#include<stdio.h>
#include<stdbool.h>

bool isprime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
       
    }
     return true;
}
int main(){
    int num;
    printf("Enter a number\t.");
    scanf("%d",&num);
bool value = isprime(num);
if(value){
    printf("%d is prime",num);
}else{
 printf("%d is not prime",num);
}
}
