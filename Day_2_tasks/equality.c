#include<stdio.h>
int main()
{
  printf("This program checks whether two numbers are equal or not\n");
  int num1,num2;
  printf("Enter num1\n");
  scanf("%d",&num1);
  printf("Enter num2\n");
  scanf("%d",&num2);
  if(num1==num2)
    {
    printf("num1 = num2");
  }
  else{
    printf("num1!=num2");
  }
}