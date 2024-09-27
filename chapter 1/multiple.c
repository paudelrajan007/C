//Write a program to print the multiplication table of a given number using for loop.
 #include<stdio.h>
 
 #define rajan main
    void rajan(){
 int num,mul=1,i;
printf("Enter a number :\t");
scanf("%d",&num);
for(i=1;i<=10;i++){
    
    mul=num*i;
    printf("%d* %d= %d\n",num,i,mul);
    }


}
    
 