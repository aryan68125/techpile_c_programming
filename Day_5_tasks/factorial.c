#include<stdio.h>
/*declare a function*/
int factorial(int num);

int main()
{
 printf("Enter the number whose factorial you want to find\n");
 int number;
 scanf("%d",&number);
 int result = factorial(number);
 printf("the factorial of %d = %d\n",number,result);
 return 0;
}
//funtion to calculate the factorial of a number
int factorial(int num){
  int factorial=1;
  for(int i=1;i<=num;i++){
    factorial=factorial*i;
  }
  return factorial;
}