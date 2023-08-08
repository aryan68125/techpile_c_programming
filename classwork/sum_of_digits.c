#include<stdio.h>
int sum_digits(int number);
int main()
{
  printf("Enter the number\n");
  int number;
  scanf("%d",&number);
  
  int sum_of_digits = sum_digits(number);
  printf("sum of all the digits of a number = %d \n",sum_of_digits);
  return 0;
}
int sum_digits(int number)
{
  int sum=0;
  while(number!=0){
    int digits = number%10;
    sum=sum+digits;
    number=number/10;
  }
  return sum;
}