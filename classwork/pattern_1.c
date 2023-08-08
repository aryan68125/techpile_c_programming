/*
* 54321
* 54321
* 54321
* */
#include<stdio.h>
int main()
{
  printf("Enter the limiter\n");
  int limiter;
  scanf("%d",&limiter);
  for(int i=1;i<=limiter;i++){
    for(int j=5 ; j>=1;j--){
      printf("%d ", j);
    }
    printf("\n");
  }
}