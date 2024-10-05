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
    
    printf("Enter word you want to insult :");
    scanf(" %c",&word);
    
    printf("Enter index where u want to insult word :");
    scanf("%d",&index);
    
    if(index<0||index>arraylength){
        printf("You reach maximum \"Thank you\"");
    }else{
        for(i=arraylength;i>index;i--){
            a[i]=a[i-1];
        }
        a[index]=word;
        arraylength++;
        
    }for(i=0;i<arraylength;i++){
        printf(" %c\n",a[i]);
    }

    return 0;
}