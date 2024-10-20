/* 3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).
Fahrenheit = (9/5×Celsius)+32
   Celsius = ( 5/9×(Fahrenheit−32))
   */
   #include<stdio.h>
   void main(){
    float celsius,fahrenheit,converted_celsius,converted_fahrenheit;
    printf("Enter celsious\t ");
    scanf("%f",&celsius);
    printf("Enter fahrenheit\t");
    scanf("%f",&fahrenheit);
    converted_fahrenheit=(9.0/5.0*celsius)+32;
   converted_celsius=(5.0/9.0)*(fahrenheit-32);
    printf("Celsius to Fahrenheit is %f \n",converted_fahrenheit);
    printf("Fahrenheit to Celsius is %f ",converted_celsius);
   }