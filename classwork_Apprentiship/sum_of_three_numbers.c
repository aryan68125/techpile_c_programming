#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sum(int a , int b, int c); //Declaring a function
int main()
{
  int a,b,c; //declaration of variables --> It creates spaces in the memory whoes name is a , b and c respectively
  
  //Inputting the values in the variable
  printf("Enter the first number \n ");
  scanf("%d",&a);
  printf("Enter the second number \n ");
  scanf("%d",&b);
  printf("Enter the third number \n ");
  scanf("%d",&c);
  int result = sum(a,b,c); //Calling the fuction that calculates the sum
  printf("%d + %d + %d = %d", a,b,c,result);
  return 0;
}
//This function calculates the sum of two numbers
int sum(int a,int b, int c){
  int result;
  result = a+b+c; //equals have the least precendence when compared to all the operators present in the programming language
  return result;
}