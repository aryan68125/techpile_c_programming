#include<stdio.h>
int main()
{
  printf("This program performs addition on two number\n");
  printf("Enter number1\n");
  int num1,num2;
  scanf("%d",&num1);
  printf("Enter number2\n");
  scanf("%d",&num2);
  printf("%d + %d = %d\n",num1,num2,(num1+num2));
}