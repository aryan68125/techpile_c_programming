#include<stdio.h>
int main(){
  int limiter ,num=1;
  printf("Enter the number of rows\n");
  scanf("%d",&limiter);
  for(int i=1;i<=limiter;i++){
    for(int s = 1;s<=limiter-i;s++){
      printf(" ");
    }
    for(int j=1;j<=i;j++){
      printf("%d ",num);
      num++;
    }
    printf("\n");
  }
}