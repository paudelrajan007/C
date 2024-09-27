#include<stdio.h>
void main(){
    int values[5],i,n,flag=0;
    printf("Enter 5 values\t");
    for (i=0;i<5;++i){
        scanf("%d",&values[i]);
    }
    printf("Enter value to search:\n");
    scanf("%d",&n);

}for(i=0;i<5;++i){
    if(values[i]==n){
        flag=1;
        break;

    }
    }if(flag==0){
        printf("Not found");
    
}