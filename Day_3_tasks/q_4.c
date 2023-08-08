#include<stdio.h>
int main()
{
  printf("Enter the highest limit of the for loop\n");
  int limiter;
  scanf("%d",&limiter);
  for(int i=limiter;i>=2;i=i-3)
     {
    printf("%d\n",i);
  }
}