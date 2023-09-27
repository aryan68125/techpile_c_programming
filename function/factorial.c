#include<stdio.h>
#include<stdlib.h>
int factorial_(int number){
  int factorial=1;
  for(int i=1; i<=number;i++){
    factorial = factorial*i;
  }
  return factorial;
}
int main(){
  printf("Enter the number\n");
  int number;
  scanf("%d", &number);
  
  int factorial = factorial_(number);
  printf("factorial is = %d\n",factorial);
}