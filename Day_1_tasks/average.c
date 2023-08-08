#include<stdio.h>
int main()
{
  printf("This program calculates the average of the 3 inputed float numbers\n");
  float num1,num2,num3;
  printf("Enter num1\n");
  scanf("%f", &num1);
  printf("Enter num2\n");
  scanf("%f", &num2);
  printf("Enter num3\n");
  scanf("%f", &num3);
  printf("average = %lf",((num1+num2+num3)/3));
}