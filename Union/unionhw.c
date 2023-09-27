#include<stdio.h>
#include<stdlib.h>
struct performance{
  int percentage;
} p;
int main(){
  struct student{
    char name[50];
    int roll;
    struct performance p;
  }s[4];
  union reward_penalty{
    int parentcontact;
    int studentcontact;
  }rp[4];
  printf("Enter the student details\n");
  for(int i=0;i<4;i++){
    printf("Enter the student details %d\n",i);
    printf("name : ");
    scanf("%s",s[i].name);
    printf("\n");
    printf("roll number : ");
    scanf("%d",&s[i].roll);
    printf("\n");
    printf("contact : ");
    scanf("%d,&",&s[i].contact);
    printf("\n");
    printf("percentage : ");
    scanf("%d",&s[i].p.percentage);
  }
  printf("\n");
  printf("Printing the structure of student\n");
  for(int i=0;i<4;i++){
    printf("Printing the student details %d\n",i);
    printf("name : %s",s[i].name);
    printf("\n");
    printf("roll number : %d",s[i].roll);
    printf("\n");
    printf("contact : %d",s[i].contact);
    printf("\n");
    printf("percentage : %d",s[i].p.percentage);
    printf("\n");
  }
  for(int i=0;i<4;i++){
    if(s[i].p.percentage<40){
      printf("You have failed the exam you have to give your father's contact number\n");
      scanf("%d",&rp[i].parentcontact);
    }
    else if(s[i].p.percentage>80){
      printf("You have scored above 80 congractulations give us your contact no so that we can distribute the prize\n");
      scanf("%d",&rp[i].studentcontact);
    }
  }
  
  printf("list of students's parents contact numbers who have failed\n");
  for(int i=0;i<4;i++){
    if(s[i].p.percentage<40){
      printf("Parents contact number : %d\n",rp[i].parentcontact);
    }
  }
  
  printf("list of students's contact numbers who have scored above 80\n");
  for(int i=0;i<4;i++){
    if(s[i].p.percentage>80){
      printf("Student's contact number : %d\n",rp[i].studentcontact);
    }
  }
}