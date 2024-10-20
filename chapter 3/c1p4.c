/* 4. Write a program to calculate simple interest for a set of values representing 
principal, number of years and rate of interest. 
simple_interest=(P*T*R)/100
*/
#include<stdio.h>
void main(){
    float simple_intrest,principle,time,intrest;
printf("Enter principle, time and intrest\t");
scanf("%f%f%f",&principle,&time,&intrest);
simple_intrest=(principle*time*intrest)/100;
printf("Simple intrest is %.2f",simple_intrest);
}