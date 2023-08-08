#include<stdio.h>
int main(){
  
printf("This is a percentage calulcation program\n");
printf("Enter the total marks\n");
double total;
scanf("%lf", &total);
printf("Enter the obtain marks\n");
double obtain_marks;
scanf("%lf", &obtain_marks);
double result = (obtain_marks/total) * 100;
printf("percentage : %lf", result);
}