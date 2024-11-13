#include<stdio.h>
void hellowworld(int count );
void hellowworld( int count){
    if(count == 0){
        return;
    }
    printf("Hellow world\n");
   hellowworld(count-1);
}
#define rajan main
    void rajan(){
   hellowworld(5);
}


