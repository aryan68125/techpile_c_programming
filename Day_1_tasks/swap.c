#include<stdio.h>
int main(){
  printf("This program swaps the contents of the two variables without using the third variables\n");
  printf("Enter the first number \n");
  int a,b;
  scanf("%d",&a);
  printf("Enter the second number \n");
  scanf("%d",&b);
  printf("%d-%d\n", a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d-%d\n", a,b);
}