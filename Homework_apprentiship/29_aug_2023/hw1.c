#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int condition(int num1,int num2){
  int result = 0;
  if(num1>num2){
    result = num1 - num2;
    return result;
  }
  else{
    result = num1 + num2;
    return result;
  }
}
int main(){
  int num1,num2;
  printf("Enter the first number\n");
  scanf("%d",&num1);
  printf("Enter the second number\n");
  scanf("%d",&num2);
  
  int result = condition(num1,num2);
  printf("%d is the result\n", result);
}