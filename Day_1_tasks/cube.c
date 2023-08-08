#include<stdio.h>
int main()
{
  printf("This program calculates the cube of the number\n");
  printf("Enter the number\n");
  int num;
  scanf("%d",&num);
  printf("cube of %d = %d",num,(num*num*num));
}