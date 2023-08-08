#include<stdio.h>
#include<math.h>
int count_digits(int number);
int sum_of_digits(int number);
int main(){
  
  printf("Enter the number\n");
  int number;
  scanf("%d",&number);
  
  //checking the number of digits in a number
  int number_of_digits = count_digits(number);
  if(number_of_digits<3){
    printf("the number is not eligible for summision their digits\n");
  }
  else{
    printf("The number is eligible for summision of its digits\n");
    int sum = sum_of_digits(number);
    printf("The sum of digits of a number = %d\n ", sum);
  }
  return 0;
}
int count_digits(int number)
{
  int digits,count=0;
  while(number!=0){
    digits=number%10;
    count++;
    number=number/10;
  }
  return count;
}
int sum_of_digits(int number){
  int digits,sum=0,power;
  while(number!=0){
    digits=number%10;
    power=pow(digits,3); //pow(number,power)
    sum=sum+power;
    number=number/10;
  }
  return sum;
}