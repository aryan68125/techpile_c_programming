//how many numbers are divisible by 3 within 1 to n
#include<stdio.h>
int sum_of_digit(int number);
int divisible_by_three(int sum_of_digits);
int main()
{
      printf("Enter the upper limit of the series\n");
      int limiter;
      scanf("%d", &limiter);
      for(int i =1;i<=limiter;i++)
        {
        int sum = sum_of_digit(i);
        int flag = divisible_by_three(sum);
        if(flag == 1){
          printf("%d is divisible by 3\n",i);
        }
      }
}
int sum_of_digit(int number){
  int backup_number,digit,sum=0;
  backup_number=number;
  while(number!=0){
    digit=number%10;
    sum=sum+digit;
    number=number/10;
  }
  return sum;
}
int divisible_by_three(int sum_of_digits){
  if(sum_of_digits%3 == 0){
    return 1; //is divisible by 3
  }
  else{
    return 0 ; //is not divisible by 3
  }
}