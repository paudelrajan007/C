//Print sarbesh shrestha results
#include<stdio.h>
void main(){
char University[]="Kalinga University";
char Name[]="Sarbesh shrestha";
char Father_Name[]="Devkumar shrestha";
char Mother_Name[]="KIRAN MAYA MANANDHAR";
char Program[]="BACHELOR OF TECHNOLOGY COMPUTER SCIENCE ENGINEERING";
double  Enrollment_no=23071349083312;
int RollNo=24055711;
int semester=2;
char *CourceName[]= {"Fundamentals of Mechanical Engineering & Mechatronics","Emerging Domain in Electronics Engineering","Engineering Chemistry","Engineering Mathematics-II","Environmental Science","Ertificial Intelligence for Engineers"};
int max=100;
int marks[]={95,59,84,66,31,38};
float persentage;
float sum=0;
printf("University:%s             ",University);
printf(" Name: %s       \n",Name);
printf("Father Name: %s \n",Father_Name);
printf("Mother Name: %s\n",Mother_Name);
printf("Program: %s\n",Program);
printf("Enrollment_no: %.0lf\n",Enrollment_no);
printf("RollNo: %d\n",RollNo);
printf("semester: %d\n",semester);
int length=sizeof (marks) / sizeof (marks[0]);
for(int i=0 ; i<length;i++){
    printf("%s %d\n",CourceName[i],marks[i]);
sum += marks[i];
persentage = (sum/500)*100;
}

printf("persentage: %.2f\n",persentage);

}

