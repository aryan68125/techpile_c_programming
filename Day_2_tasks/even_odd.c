#include<stdio.h>
int main(){
  printf("This program checks whether a number is even or odd\n");
  int num1,num2;
  printf("Enter the num1\n");
  scanf("%d", &num1);
  if(num1%2!=0)
    {
    printf("%d is odd\n",num1);
  }
  else{
    printf("%d is even\n",num1);
  }
}