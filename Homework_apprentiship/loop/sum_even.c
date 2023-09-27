#include<stdio.h>
int main(){
  printf("Enter the upper limit of the series\n");
  int limiter ;
  scanf("%d",&limiter);
  int sum=0;
  for(int i=0;i<=limiter;i++){
    if(i%2 == 0){
      sum = sum+i;
    }
  }
  printf("sum of all even numbers in the series from 2 to %d = %d",limiter,sum);
}