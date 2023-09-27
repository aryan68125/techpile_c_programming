#include<stdio.h>
int main(){
  int limiter;
  printf("Enter the upper limit of the series\n");
  scanf("%d",&limiter);
  
  for(int i=0;i<=limiter;i=i+2){
    printf("%d ",i);
  }
  printf("\n");
  
  int limiter2;
  printf("Enter the upper limit of the series\n");
  scanf("%d",&limiter2);
  int sum=0;
  for(int i=5;i<=limiter2;i*=2){
    printf("%d ",i);
  }
  printf("\n");
  
  printf("Enter the limiter for the negative series\n");
  int limiter3;
  scanf("%d",&limiter3);
  for(int j=limiter3;j>=0;j=j-20){
    printf("%d ",j);
  }
  printf("\n");
}