#include<stdio.h>
int main(){
  //sum of digits
  int number,backup_number,digits,sum=0;
  printf("Enter the number to find the summision of the digits of the number\n");
  scanf("%d",&number);
  backup_number=number;
  //get the digits
  while(number!=0){
    digits=number%10;
    sum=sum+digits;
    number=number/10;
  }
  printf("number entered = %d\n",backup_number);
  printf("sum of digits = %d\n",sum);
}