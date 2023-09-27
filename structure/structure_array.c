#include<stdio.h>
#include<stdlib.h>
int main(){
  struct student{
    int roll;
    char name[50];
    float percentage;
  };
  struct student a[4];
  
  //input 
  for(int i=0;i<4;i++){
    printf("enter student %d details",i);
    printf("Enter the roll number\n");
    scanf("%d",&a[i].roll);
    printf("Enter the name\n");
    scanf("%s",a[i].name);
    printf("enter percentage \n");
    scanf("%f", &a[i].percentage);
  }
  
  //output
  for(int i=0;i<4;i++){
    if(a[i].percentage > 80){
      printf("student %d details : ",i);
      printf("Enter the roll number\n");
      printf("%d\n",a[i].roll);
      printf("Enter the name\n");
      printf("%s\n",a[i].name);
      printf("enter percentage \n");
      printf("%f\n", a[i].percentage);
      printf("\n");
    }
  }
}