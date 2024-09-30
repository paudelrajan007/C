//using library function  calculate the area of square with side a;
#include<stdio.h>
#include<math.h>
double side();
double area_of_square(double side){
    
    return pow(side,2);
}
int main(){
    double side,area ;
 printf("enter the value \n");
 scanf("%lf",&side);
    area = area_of_square(side);
    printf("%.2f",area);
}