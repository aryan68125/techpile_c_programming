//how many numbers ends with 3 between 1 to n
#include<stdio.h>
int last_digit(int number);
int main(){
  printf("Enter the upper limit of the series\n");
  int limiter, last_digit_var;
  scanf("%d",&limiter);
  for(int i=0;i<=limiter;i++){
    last_digit_var = last_digit(i);
    if(last_digit_var == 3){
      printf("%d\n",i);
    }
  }
}
int last_digit(int number){
  int backup_number,digit;
  backup_number = number;
    digit = number%10;
    number=number/10;
  
  return digit;
}