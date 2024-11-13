#include<stdio.h>
int Table(int n);
int Table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}
#define rajan main
    void rajan(){
        int n;
printf("Enter a number \t");
scanf("%d",&n);
Table(n);

}