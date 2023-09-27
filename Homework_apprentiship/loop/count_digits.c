#include<stdio.h>
int main(){
  printf("Enter number\n");
  printf("count digits of the number \n");
  int number;
  scanf("%d",&number);
  int temp=number;
  int reverse =1;
  int count=0;
  while(number>0){
    count++;
    number=number/10;
  }
  printf("number of digits in number %d = %d\n",temp,count);
}