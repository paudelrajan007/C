#include<stdio.h>
#include<string.h>
void Namaste();
void Bonjour();
void Namaste(){
    printf("Namaste India & Nepal");
}
void Bonjour(){
    printf("Bonjour France");

}
#define rajan main
    void rajan(){
        char ch[20];
printf("Enter Namaste if you are Nepali or Indian or Bonjour if you are France\t");
scanf("%s",&ch);
if(strcmp(ch,"Indian")==0){
    Namaste();
}else{
    Bonjour();
}
}