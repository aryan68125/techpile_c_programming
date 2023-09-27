#include<stdio.h>
int main(){
  printf("Enter number\n");
  int number;
  scanf("%d",&number);
  
  int digit,reverse=0,temp;
  temp=number;
  
  rev:
    digit = number%10;
    reverse = reverse*10+digit;
    number = number/10;
  if(number!=0){
    goto rev;
  }
  printf("reverse  = %d",reverse);
}