//Binary Searching
#include<stdio.h>

#define rajan main
    void rajan(){
int array[5],i,mid,L,R,value,found=0;
printf("Enter 5 sorted number\t ");
for(i=0;i<5;i++){
    scanf("%d",&array[i]);

}
printf("Enter the number which you want to search \t");
scanf("%d",&value);
L=0;R=4;

while(L<=R){
    mid=(L+R)/2;
    if(array[mid]==value){
        found=1;
        break;
    }

}
if(value<array[mid]){
    R=mid-1;

}else{
    L=mid+1;
}
if(found==0){
    printf("Not founf\n");
}
else{
    printf("found,Position=%d",mid+1);
}

}
