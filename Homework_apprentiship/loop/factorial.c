#include <stdio.h>
#include<stdlib.h>
int main(){
  printf("Enter the number that you want to find factorial of\n");
  int number;
  scanf("%d",&number);
  int f=1;
  for(int i=1;i<=number;i++){
    f=f*i;
  }
  printf("the factorial of %d is  = %d",number,f);
}