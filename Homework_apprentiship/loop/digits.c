//sum of all digits in a number
#include<stdio.h>
int main(){
  printf("Enter the number \n");
  printf("find the sum of all digits\n");
  int number;
  scanf("%d",&number);
  int sum=0;
  //3456 -> 3X1000 + 4X100 + 5X10 + 6
  //digit extraction algorithm from a number using while loop
  while(number>0){
    int digit=number%10; //jab modulus karengey to last digit mil jaygi
    sum =sum+digit;
    number=number/10; // jab number update karna higa to divide by 10 kar dengey
  }
  printf("The sum of digits of a number = %d",sum);
}