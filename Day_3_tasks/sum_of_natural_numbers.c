#include<stdio.h>
int main()
{
  printf("Enter the limit for the loop\n");
  int limiter,sum=0;
  scanf("%d",&limiter);
  for(int i=1;i<=limiter;i++)
      {
    printf("%d ",i);
    sum=sum+i;
  }
  printf("\n");
  printf("sum of natural numbers series = %d\n",sum);
}