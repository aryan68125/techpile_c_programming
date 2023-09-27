#include<stdio.h>
int sumofdigits(int number,int sum){
  if(number==0){
    return sum;
  }
  int digits = number%10;
  sum+=digits;
  return sumofdigits(number/10,sum);
}
int main(){
  printf("Enter the number\n");
  int number;
  scanf("%d",&number);
  int sum = sumofdigits(number,0);
  printf("sum of digits of number %d = %d", number,sum);
}