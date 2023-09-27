#include<stdio.h>
int factorial(int number, int i, int fact){
  if(i==number+1){
    return fact;
  }
  fact = fact*i;
  printf("%d ",fact);
  return factorial(number,i+1,fact);
}
int main(){
  int number ;
  printf("Enter the number\n");
  scanf("%d",&number);
  int fact=1;
  fact = factorial(number,1,fact);
  printf("the factorial of %D is = %d",number,fact);
}