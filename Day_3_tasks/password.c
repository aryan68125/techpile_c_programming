#include<stdio.h>
int main(){
  printf("Enter the password\n");
  int password;
  int correct_password = 1234;
  scanf("%d",&password);
  if(password==correct_password)
    {
    printf("correct password\n");
  }
  else{
    printf("incorrect password\n");
  }
}