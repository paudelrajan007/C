/*4. Write a C program to print the following characters in reverse.
like Test Characters: 'X', 'M', 'L'*/
#include<stdio.h>
void main(){
    char sentence[41];//including null value and space
    int length,i;
    printf("Enter length of sentence including spaces max(40):\t");
    scanf("%d",&length);
        
        if(length<0||length>40){
            printf("\"Thank You\"");
        }else{
        printf("Enter sentence :\t");
        scanf(" ");
    
    for(i=0;i<length;i++){
        scanf("%c",&sentence[i]);
        sentence[length] = '\0'; // Null terminate the string
    

    }for(i=length-1;i>=0;i--){
        printf("%c",sentence[i]);
    }printf("\n");
        }
}

// #include <stdio.h>

// int main() 
// {
//     // Declare and initialize character variables
//     char char1 = 'X';
//     char char2 = 'M';
//     char char3 = 'L';

//     // Print the original and reversed characters
//     printf("The reverse of %c%c%c is %c%c%c\n",
//         char1, char2, char3,
//         char3, char2, char1);

//     return(0);
// }

