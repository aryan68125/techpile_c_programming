#include<stdio.h>
int main()
{
  printf("Enter the highest limit of the for loop\n");
  int limiter;
  scanf("%d",&limiter);
  for(int i=limiter;i>=1;i=i-2)
     {
    printf("%d\n",i);
  }
}