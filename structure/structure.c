#include<stdio.h>
struct student {
  int roll;
  char name[50];
  float percentage;
};
struct student a,b;
int main(){
  printf("Enter the details of student 1\n");
  printf("Enter roll number and name of the student respectively\n");
  scanf("%d",&a.roll);
  scanf("%[^\n]s",a.name);
  printf("Enter the prcentage\n");
  scanf("%f",&a.percentage);
  
  printf("Enter the details of student 2\n");
  printf("Enter roll number and name of the student respectively\n");
  scanf("%d",&b.roll);
  scanf("%[^\n]s",b.name);
  printf("Enter the prcentage\n");
  scanf("%f",&b.percentage);
  
  printf("Record of student is \n");
  printf("%d %s %f",a.roll,a.name,a.percentage);
  printf("%d %s %f",b.roll,b.name,b.percentage);
}