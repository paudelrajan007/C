#include<stdio.h>
void hellow();
void goodbye();
void goodbye(){
    printf("hellow\n");
}
void hellow(){
    printf("goodbye\n");
}

#define rajan main
    void rajan(){
hellow();
goodbye();
hellow();

}