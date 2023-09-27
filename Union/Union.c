#include<stdio.h>
#include<stdlib.h>
struct info{
  int contact;
  float percentage;
};
int main(){
  struct student{
    int rollno;
    char name[50];
    struct info I;
  } s[5];
  
  printf("Enter details of 5 strudents\n");
  for(int i=0;i<5;i++){
    printf("Enter details of student %d\n",i);
    scanf("%d%s%d%f", &s[i].rollno,s[i].name,&s[i].I.contact, &s[i].I.percentage);
  }
  printf("printing the student details\n");
  for(int i=0;i<5;i++){
    printf("Printing details of student %d\n",i);
    printf("%d %s %d %f", s[i].rollno,s[i].name,s[i].I.contact, s[i].I.percentage);
  }
}