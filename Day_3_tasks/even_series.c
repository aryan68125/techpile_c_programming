#include<stdio.h>
int main(){
  int limiter;
  printf("Enter the upper limit of the even number series\n");
  scanf("%d",&limiter);
  for(int i=0;i<=limiter;i++)
    {
    if(i%2==0)
      {
      printf("%d\n",i);
    }
  }
}