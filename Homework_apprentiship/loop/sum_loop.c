#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  printf("enter the upper limit of the loop\n");
  int limiter;
  scanf("%d",&limiter);
  int sum=0;
  for(int i=1;i<=limiter;i++){
    sum+=i;
  }
  printf("Sum of all the numbers from 1 to %d = %d\n",limiter,sum);
}