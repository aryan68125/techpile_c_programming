#include<stdio.h>
int main(){
  printf("Enter the number whoes times table you want to see\n");
  int number, multiplication=1;
  scanf("%d",&number);
  for(int i =0;i<=20;i++)
    {
    multiplication=number*i;
    printf("%d X %d = %d\n",number,i,multiplication);
  }
}