//using library function  calculate the area of square with side a;
#include<stdio.h>
#include<math.h>
double side();
double area_of_square(double side){
    double area_of_square=pow(side,2);
    return pow(side,2);
}
int main(){
    double side =25.00;
double area_of_square=pow(side,2);
    
    printf("%.2f",area_of_square);
}