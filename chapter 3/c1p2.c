/* 2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.
1 area of a circle = Area=πr2
2 volume of a cylinder = πr2h
pi=3.14 */
#include<stdio.h>
void main(){
float area , pi,r,h,volume_of_cylinder;
pi=3.14;
printf("Enter radius and height \t ");
scanf("%f %f",&r,&h);
area=pi*r*r;
volume_of_cylinder=pi*r*r*h;
printf("Area of circle is %.2f ",area);
printf(" Volume of a cylinder is %.2f ",volume_of_cylinder);
}


