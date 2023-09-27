//wap to create a rcord of employees of an organization having members employee name , age, experience, salary
#include<stdio.h>
#include<stdlib.h>
struct emloyee{
  char name[50];
  int age;
  int experience;
  float salary;
};
int main(){

  struct emloyee a[4];
  for(int i=0;i<4;i++){
    printf("Enter employee details of employee %d\n",i);
    printf("name\n");
    scanf("%s",a[i].name);
    printf("age\n");
    scanf("%d",&a[i].age);
    printf("experience\n");
    scanf("%d",&a[i].experience);
    printf("salary\n");
    scanf("%f",&a[i].salary);
    printf("\n");
  }
  for(int i=0;i<4;i++){
    if(a[i].experience>10){
      printf("Enter employee details of employee %d\n",i);
      printf("name : %s\n",a[i].name);
      printf("age : %d\n",a[i].age);
      printf("experience : %d\n",a[i].experience);
      printf("salary : %.2f\n",a[i].salary);
      printf("\n"); 
    }
  }
}