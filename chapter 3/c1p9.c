#include<stdio.h>
void main (){
int a[100],number,index,i,choice,arraylength;
printf("Enter array length max (100) min (0): \t");
scanf("%i",&arraylength);
if(arraylength<0||arraylength>100){
    printf("You reach max(100) and min(0) :\t");
    printf("\"Thank You \"!\t");
}else{
        printf("Enter array elements :\t");
    for(i=0;i<arraylength;i++){
        scanf("%i",&a[i]);
    }
    while(1){
        printf("Choose an operation :\n");
        printf("1: Insult an elements \n");
        printf("2: Delete an elements \n");
        printf("3: Display an elements \n");
        printf("4: Exit \n");
        printf("Enter your choice :\t");
        scanf("%i",&choice);
    switch (choice){
        case 1:
        printf("Enter a number which you want to insult :\t");
        scanf("%i",&number);
        printf("Enter index where you want to insult :\t");
        scanf("%i",&index);
        if(index<0||index>arraylength){
            printf("Invalid index \"Thank You\"");
        }else{
            for(i=arraylength;i>index;i--){
                a[i]=a[i-1];
                
            }
            a[index]=number;
            arraylength++;
            printf("Elements insult successfully\n");
            break;
        }
        case 2:
        printf("Enter index (0 to %i):\t",arraylength);
        scanf("%i",&index);
        if(index<0||index>arraylength){
            printf("Invalide index");
        }else{
            for(i=index;i<arraylength-1;i++){
                a[i]=a[i+1];
            }arraylength--;
            printf("Element deleted ");
            break;
        }
        case 3:
        printf("Current array elements :\t");
        for(i=0;i<arraylength;i++){
            printf("%i",a[i]);
        }
        printf("\n");
        break;
    case 4:
    printf("Exit the program \"Thank You\" ");
    break;
default:
printf("Invide choice:\t");
    }
    }
    
}

}

   
   