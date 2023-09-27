#include<stdlib.h>
#include<stdio.h>
int main(){
  int limiter;
  printf("enter the last limit for the loop\n");
  scanf("%d",&limiter);
  int i=10;
  while(i>=limiter){
    printf("%d\n",i);
//    i++;
    i=i-1;
  }
}