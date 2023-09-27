#include<stdio.h>
int sumOfDigits(int *n, int sum){
  if(*n==0){
    return sum;
  }
  else
  {int digit = *n%10;
  sum = sum+digit;
  *n=*n/10;
  return sumOfDigits(n,sum);
  }
}
int main(){
     int number ;
     printf("Enter the number \n");
     scanf("%d",&number);
     int temp=number;
     
     int sum = sumOfDigits(&number,0);
     printf("The sum of digits of a number %d is = %d",temp,sum);
}