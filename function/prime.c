#include<stdio.h>
#include<stdlib.h>
int prime(int num){
  int count=0;
  for(int i=1;i<=num;i++){
    if(num%i==0){
      count++;
    }
  }
  if(count==2){
    return 1; //if number is prime
  }
  else{
    return 0; //if number is not prime
  }
}
int main(){
  printf("Enter the upper limit of the prime series\n");
  int limiter;
  scanf("%d",&limiter);
  
  for(int i=0;i<limiter;i++){
    int flag = prime(i);
    if(flag==1){
      printf("%d ",i);
    }
  }
  printf("\n");
}