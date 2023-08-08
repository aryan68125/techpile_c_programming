#include<stdio.h>
#include<math.h>
int main(){
  //examples of armstrong numbers are 0,1,153,370,371,407 etc...
  printf("Enter the number to b checked if the number is armstrong or not\n");
  int number, count=0,sum=0,backup_number,digit=0,power=0;
  scanf("%d",&number);
  backup_number=number;
  //counting the number of digits
  do {
    number /= 10;
    ++count;
  } while (number != 0);
  number=backup_number;
  while(number!=0)
    {
    digit=number%10;
    power = pow(digit,count);
    sum = sum+power;
    number=number/10;
  }
  printf("The number entered is %d\n",backup_number);
  printf("The sum of powers of digits of a number %d\n",sum);
  printf("Checking if the number is armstrong or not\n");
  if(sum==backup_number)
    {
    printf("the number %d is an armstrong number\n",backup_number);
  }
  else{
    printf("the number %d is not an armstrong_number\n",backup_number);
  }
}