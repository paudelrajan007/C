//delete
#include <stdio.h>

int main() {
    char a[50];
    char word;
    int index,arraylength,i;
    
    printf("Enter array length :");
    scanf("%d", &arraylength);
    
    printf("Enter elements :");
    for(i=0;i<arraylength;i++){
    scanf(" %c",&a[i]);
    }
    
    printf("Enter index where u want to delete word :");
    scanf("%d",&index);
    
    if(index<0||index>arraylength){
        printf("You reach maximum \"Thank you\"");
    }else{
        word=a[index];
        printf(" your deleted word: %c\n",a[index]);
        for(i=index;i<arraylength-1;i++){
            a[i]=a[i+1];
        }
        
        arraylength--;
        
    }for(i=0;i<arraylength;i++){
        printf(" %c\n",a[i]);
    }

    return 0;
}